%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <glib.h>

int yylex();
int yyerror(char *msg);

GHashTable *table;

FILE *stream;
char *module_name;
unsigned int max_stack = 10;

extern void begin_code();
extern void end_code();
extern void produce_code(GNode * node);
int cpt = 0;
int cptEndIf = 0;
int cptWhile = 0;
char* branchement = "IL_";	

%}
%error-verbose

%token<number> TOK_NUMBER
%token<string> TOK_IDENT
%token TOK_AFFECT
%token TOK_SEMICOLON
%left TOK_ADD
%left TOK_SUB
%left TOK_MUL
%left TOK_DIV
%token TOK_OPEN_PARENTHESIS
%token TOK_CLOSE_PARENTHESIS
%token TOK_PRINT
%token TOK_READ

%token TOK_IF
%token TOK_THEN
%token TOK_ELSE
%token TOK_ELSEIF
%token TOK_END
%token TOK_ENDIF

%token TOK_FALSE
%token TOK_TRUE
%token TOK_NOT
%left TOK_AND
%left TOK_OR
%left TOK_SUPEQ
%left TOK_SUP
%left TOK_INF
%left TOK_INFEQ
%left TOK_DIFF
%left TOK_EQ

%token TOK_WHILE;
%token TOK_DO;
%token TOK_ENDWHILE;

%token TOK_ENDFOREACH;
%token TOK_FOREACH;
%token TOK_PTPT;

%token TOK_BREAK;

%token TOK_IN;
%type<node> code
%type<node> expr
%type<node> instruction
%type<node> ident
%type<node> print
%type<node> read
%type<node> affectation
%type<node> if
%type<node> elseif
%type<node> else
%type<node> booleanexpr
%type<node> while
%type<node> foreach
%type<node> break

%union {
	gulong number;
	char *string;
	GNode * node;
}

%%

program: code {
	begin_code();
	produce_code($1);
	end_code();
	g_node_destroy($1);
} 
;

code:
	code instruction
	{
		$$ = g_node_new("code");
		g_node_append($$, $1);	
		g_node_append($$, $2);		
	}
|
	{
		$$ = g_node_new("");
	}
;

instruction:
	affectation
|
	print
|
	read
|
	if
|
	elseif
|
	else
|
	while
|
	foreach
|
	break
;

ident:
	TOK_IDENT
	{
		$$ = g_node_new("ident");
		gulong value = (gulong) g_hash_table_lookup(table, $1);
		if (!value) {
			value = g_hash_table_size(table) + 1;
			g_hash_table_insert(table, strdup($1), (gpointer) value);
		}
		g_node_append_data($$, (gpointer)value);
	}
;

affectation:
	ident TOK_AFFECT expr TOK_SEMICOLON
	{
		$$ = g_node_new("affect");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
;

print:
	TOK_PRINT expr TOK_SEMICOLON
	{
		$$ = g_node_new("print");
		g_node_append($$, $2);
	}
;

read:
	TOK_READ ident TOK_SEMICOLON
	{
		$$ = g_node_new("read");
		g_node_append($$, $2);
	}
;



expr:
	ident
|
	TOK_NUMBER
	{
		$$ = g_node_new("number");
		g_node_append_data($$, (gpointer)$1);
	}
|
	expr TOK_ADD expr
	{
		$$ = g_node_new("add");
		g_node_append($$, $1);	
		g_node_append($$, $3);	
	}
|
	expr TOK_SUB expr
	{
		$$ = g_node_new("sub");
		g_node_append($$, $1);	
		g_node_append($$, $3);	
	}
|
	expr TOK_MUL expr
	{
		$$ = g_node_new("mul");
		g_node_append($$, $1);	
		g_node_append($$, $3);	
	}
|
	expr TOK_DIV expr
	{
		$$ = g_node_new("div");
		g_node_append($$, $1);	
		g_node_append($$, $3);	
	}
|
	TOK_OPEN_PARENTHESIS expr TOK_CLOSE_PARENTHESIS
	{
		$$ = $2;
	}
;

booleanexpr :
	TOK_FALSE
	{
		$$ = g_node_new("false");
	}
|
	TOK_TRUE
	{
		$$ = g_node_new("true");
	}
|
	expr TOK_SUPEQ expr
	{
		$$ = g_node_new(">=");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	expr TOK_SUP expr
	{
		$$ = g_node_new(">");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	expr TOK_INF expr
	{
		$$ = g_node_new("<");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	expr TOK_INFEQ expr
	{
		$$ = g_node_new("<=");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	expr TOK_DIFF expr
	{
		$$ = g_node_new("#");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	expr TOK_EQ expr
	{
		$$ = g_node_new("=");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	TOK_NOT booleanexpr
	{
		$$ = g_node_new("not");
		g_node_append($$, $2);
	}
|
	booleanexpr TOK_AND booleanexpr
	{
		$$ = g_node_new("and");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	booleanexpr TOK_OR booleanexpr
	{
		$$ = g_node_new("or");
		g_node_append($$, $1);	
		g_node_append($$, $3);
	}
|
	TOK_OPEN_PARENTHESIS booleanexpr TOK_CLOSE_PARENTHESIS
	{
		$$ = g_node_new("booleanexpr");
		g_node_append($$, $2);
	}
;

if : 	
	TOK_IF booleanexpr TOK_THEN code elseif else TOK_END
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
		g_node_append($$, $6);
	}
|
	TOK_IF booleanexpr TOK_THEN code else TOK_END
	{
		
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
	}
|
	TOK_IF booleanexpr TOK_THEN code TOK_END
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
	}
	
|
	TOK_IF booleanexpr TOK_THEN code elseif TOK_END
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
	}
|
	TOK_IF booleanexpr TOK_THEN code TOK_ENDIF
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
	}
|
	TOK_IF booleanexpr TOK_THEN code else TOK_ENDIF
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
	}	
|
	TOK_IF booleanexpr TOK_THEN code elseif TOK_ENDIF
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
	}
|
	TOK_IF booleanexpr TOK_THEN code elseif else TOK_ENDIF
	{
		$$ = g_node_new("if");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $5);
		g_node_append($$, $6);
	}
;

elseif :

	TOK_ELSEIF booleanexpr TOK_THEN code TOK_ENDIF
	{
		$$ = g_node_new("elseif");
		g_node_append($$, $2);	
		g_node_append($$, $4);
	}
|
	TOK_ELSEIF booleanexpr TOK_THEN code TOK_ENDIF elseif 
	{
		$$ = g_node_new("elseif");
		g_node_append($$, $2);	
		g_node_append($$, $4);
		g_node_append($$, $6);
	}	
;

else :
	TOK_ELSE code
	{
		$$ = g_node_new("else");
		g_node_append($$, $2);	
	}
;

while :
	TOK_WHILE booleanexpr TOK_DO code TOK_END
	{
		$$ = g_node_new("while");
		g_node_append($$, $2);
		g_node_append($$, $4);
	}
|
	TOK_WHILE booleanexpr TOK_DO code TOK_ENDWHILE
	{
		
	}
;

foreach :
	TOK_FOREACH ident TOK_IN expr TOK_PTPT expr TOK_DO code TOK_END
	{
		$$ = g_node_new("foreach");
		g_node_append($$, $2);
		g_node_append($$, $4);
		g_node_append($$, $6);
		g_node_append($$, $8);
	}
|
	TOK_FOREACH ident TOK_IN expr TOK_PTPT expr TOK_DO code TOK_ENDFOREACH
	{
		$$ = g_node_new("foreach");
		g_node_append($$, $2);
		g_node_append($$, $4);
		g_node_append($$, $6);
		g_node_append($$, $8);
	}
;

break : 
	TOK_BREAK
	{
		$$ = g_node_new("break");
	}
;
%%

#include <stdlib.h>

int yyerror(char *msg)
{
	fprintf(stderr, "%s\n", msg);
}

void begin_code()
{
	fprintf(stream,
		".assembly %s {}\n"
		".method public static void Main() cil managed\n"
		"{\n"      
		"	.entrypoint\n"
		"	.maxstack %u\n"
		"	.locals init (",
		module_name,
		max_stack
	);
	guint size = g_hash_table_size(table);
	guint i;
	for (i = 0; i < size; i++) {
		if (i) {
			fprintf(stream, ", ");
		}
		fprintf(stream, "int32");
	}
	fprintf(stream, ")\n");
}


void produce_code(GNode * node)
{
	if (node->data == "code") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
	} else if (node->data == "affect") {
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	} else if (node->data == "add") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	add\n");
	} else if (node->data == "sub") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	sub\n");
	} else if (node->data == "mul") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	mul\n");
	} else if (node->data == "div") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	div\n");
	} else if (node->data == "number") {
		fprintf(stream, "	ldc.i4\t%ld\n", (long)g_node_nth_child(node, 0)->data);
	} else if (node->data == "ident") {
		fprintf(stream, "	ldloc\t%ld\n", (long)g_node_nth_child(node, 0)->data - 1);
	} else if (node->data == "print") {
		produce_code(g_node_nth_child(node, 0));
		fprintf(stream, "	call void class [mscorlib]System.Console::WriteLine(int32)\n");
	} else if (node->data == "read") {
		fprintf(stream, "	call string class [mscorlib]System.Console::ReadLine()\n");
		fprintf(stream, "	call int32 int32::Parse(string)\n");
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);
	} else if (node->data == "if") { //if booleanexpr then code elseif else end 
		cptEndIf++; // Incrémentation du compteur de if
		int tmpCpt = cptEndIf;

		produce_code(g_node_nth_child(node, 0)); // Production du code de l'expression booléenne

		fprintf(stream, "%s%d_%d:\n",branchement, cptEndIf, cpt); 
		produce_code(g_node_nth_child(node, 1)); // Production du code
		fprintf(stream, "	br %sendif%d\n",branchement,tmpCpt); // branchement vers la fin du if
		cpt++;
		fprintf(stream, "%s%d:\n",branchement,cpt);
		if(g_node_n_children(node)>=3) { // Si le if contient un elseif ou else on continue le traitement		
				cpt++;	
				produce_code(g_node_nth_child(node, 2)); // Production du code
				if(g_node_n_children(node)>=4) { // Si le if contient un elseif et else 		 
				fprintf(stream, "%s%d_%d:\n",branchement, cptEndIf, cpt);
				produce_code(g_node_nth_child(node, 3)); // Production du else
			}
		}	
		
		fprintf(stream, "%sendif%d:\n",branchement,tmpCpt); // branchement fin du if


	} else if (node->data == "elseif") { //elseif booleanexpr then code endif elseif
		produce_code(g_node_nth_child(node, 0)); // Production du code l'expression booléenne 
		produce_code(g_node_nth_child(node, 1)); // Production du code
		fprintf(stream, "	br %sendif%d\n",branchement,cptEndIf); // Branchement vers la fin du if
		cpt++;
		fprintf(stream, "%s%d:\n",branchement,cpt); 
		if(g_node_n_children(node)==3) { // Si le elseif est suivi d'un autre elseif on continue le traitement
			produce_code(g_node_nth_child(node, 2)); // Production du elseif
			cpt++;	
		}	
	} else if (node->data == "else") {
		produce_code(g_node_nth_child(node, 0)); 
	} else if (node->data == "false") { //false -> return 0; brfalse pour verif booleanexpr
		fprintf(stream, "	ldc.i4\t0\n");
		fprintf(stream, "	brfalse %s%d\n",branchement,cpt+1);
	} else if (node->data == "true") { // true -> return 1; brfalse pour verif booleanexpr
		fprintf(stream, "	ldc.i4\t1\n");
		fprintf(stream, "	brfalse %s%d\n",branchement,cpt+1);

			//POUR CHAQUE BOOLEAN EXPR : 
			//si ![booleanexpr], branchement à la sortie (donc ne reste pas dans la boucle d'ou la verif est appelée

	} else if (node->data == "<") {                        // example :       
		produce_code(g_node_nth_child(node, 0)); //verif des deux termes de la booleanexpr
		produce_code(g_node_nth_child(node, 1));  //si boolExpr0 n'est pas < à boolExpr1, on branche à la sortie de la boucle
		fprintf(stream, "	bge %s%d\n",branchement,cpt+1); //ici donc, si boolExpr0 >= boolExpr1, on sort
	} else if (node->data == "<=") {
		produce_code(g_node_nth_child(node, 0)); //Pareil pour chaque booleanexpr, on verifie l'inverse pour savoir si on sort
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	bgt %s%d\n",branchement,cpt+1);
	} else if (node->data == ">") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	ble %s%d\n",branchement,cpt+1);
	} else if (node->data == ">=") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	blt %s%d\n",branchement,cpt+1);
	} else if (node->data == "#") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	beq %s%d\n",branchement,cpt+1);
	} else if (node->data == "=") {
		produce_code(g_node_nth_child(node, 0));
		produce_code(g_node_nth_child(node, 1));
		fprintf(stream, "	bne.un %s%d\n",branchement,cpt+1);
	} else if (node->data == "not") {
		if(g_node_nth_child(node,0)->data=="=") //pour le not, on doit verifier l'inverse de la booleanExpr
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));//ici, not = -> differents
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));//donc si les deux termes de la booleanExpr sont =
			fprintf(stream, "	beq %s%d\n",branchement,cpt+1);//on sort de la boucle, verif false
		}else if(g_node_nth_child(node,0)->data=="#")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0)); //même principe pour chaque not[booleanExpr]
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bne.un %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data=="<")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	blt %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data=="<=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	ble %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data==">")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bgt %s%d\n",branchement,cpt+1);
		}else if(g_node_nth_child(node,0)->data==">=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bge %s%d\n",branchement,cpt+1);
		}
	} else if (node->data == "and") {
		produce_code(g_node_nth_child(node,0));
		produce_code(g_node_nth_child(node,1));
	} else if (node->data == "or") { //sur le modèle du code assembleur d'un while en c#-->CIL
		if(g_node_nth_child(node,0)->data=="=")
		{//suite de plusieurs booleanExpr séparés par or :
		//on verifie pour chaque l'inverse, pour ne pas sortir si false,
		//Le derneir et une verif normale de booleanexpr, si faux on peut sortir
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	beq %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="#")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bne.un %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="<")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	blt %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data=="<=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	ble %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data==">")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bgt %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}else if(g_node_nth_child(node,0)->data==">=")
		{
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 0));
			produce_code(g_node_nth_child(g_node_nth_child(node,0), 1));
			fprintf(stream, "	bge %s%d\n",branchement,cpt);
			produce_code(g_node_nth_child(node,1));
		}
	}else if(node->data =="while"){ //while booleanexpr do code end 
		//réalisé sur le modèle du code assembleur d'un while en c#-->CIL
		// Initialisation, incrémentation et déclaration des variables nécessaires aux branchements
		cptWhile++; // Incrémentation du compteur de while (pour les branchements)
		int tmpWhile = cptWhile;
		int valcpt = cpt;
		cpt+= tmpWhile;

		fprintf(stream, "	br %s%d_condwhile\n",branchement,tmpWhile); // branchement vers la condition du while
		fprintf(stream, "%s%d:\n",branchement, valcpt+tmpWhile-1); //branchement pour la boucle, si verif OK -> boucle ici
		produce_code(g_node_nth_child(node, 1)); //code à exec si verif OK
		fprintf(stream, "%s%d_condwhile:\n",branchement,tmpWhile); // branchement de la booleanexpr
		cpt= valcpt+1*tmpWhile-1; // Modification du compteur vers le code correspondant
		produce_code(g_node_nth_child(node, 0)); //verif booleanexpr
		cpt+= 3; // Modification du compteur

		fprintf(stream, "	br %s%d\n",branchement,valcpt+tmpWhile-1); //la verif de la ligne du haut faut un branchement si false, sinon branchement ici pour boucler
		fprintf(stream, "%s%d:\n",branchement, valcpt+tmpWhile); //sortie


	}else if(node->data =="foreach"){ //foreach ident in expr1 .. expr2 do code end -> Une affectation, une incrementation, if <expr2 code
		int cptFE = cpt; 
		cpt+=1;
		produce_code(g_node_nth_child(node, 1)); //affectation ident := expr1
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);

		fprintf(stream, "%s%d:\n",branchement,cptFE);//branchement avant le debut code pour faire la boucle
		produce_code(g_node_nth_child(node,3));//le code
		produce_code(g_node_nth_child(node,0));
		fprintf(stream, "	ldc.i4\t1\n"); //incrementation : ident += 1
		fprintf(stream, "	add\n");
		fprintf(stream, "	stloc\t%ld\n", (long) g_node_nth_child(g_node_nth_child(node, 0), 0)->data - 1);

		produce_code(g_node_nth_child(node,0));
		produce_code(g_node_nth_child(node,2));
		fprintf(stream, "	ble %s%d\n",branchement,cptFE); //verif boucle si ident<=expr2, on continue
		fprintf(stream, "%s%d:\n",branchement,cpt+1); //branchement de sortie
	}else if(node->data =="break"){
		fprintf(stream, "	br %s%d\n",branchement,cpt+2);// si appelé, réalise un branchement au br suivant de sortie
	}else if(node->data =="continue"){
	}
}


void end_code()
{
	fprintf(stream, "	ret\n}\n");
}

int main(int argc, char *argv[])
{
	if (argc == 2) {
		char *file_name_input = argv[1];
		char *extension;
		char *directory_delimiter;
		char *basename;
		extension = rindex(file_name_input, '.');
		if (!extension || strcmp(extension, ".facile") != 0) {
			fprintf(stderr, "Input filename extension must be '.facile'\n");
			return EXIT_FAILURE;
		}
		directory_delimiter = rindex(file_name_input, '/');
		if (!directory_delimiter) {
			directory_delimiter = rindex(file_name_input, '\\');
		}
		if (directory_delimiter) {
			basename = strdup(directory_delimiter + 1);
		} else {
			basename = strdup(file_name_input);
		}
		module_name = strdup(basename);
		*rindex(module_name, '.') = '\0';
		strcpy(rindex(basename, '.'), ".il");
		char *onechar = module_name;
		if (!isalpha(*onechar) && *onechar != '_') {
			free(basename);
			fprintf(stderr, "Base input filename must start with a letter or an underscore\n");
			return EXIT_FAILURE;
		}
		onechar++;
		while (*onechar) {
			if (!isalnum(*onechar) && *onechar != '_') {
				free(basename);
				fprintf(stderr, "Base input filename cannot contains special characters\n");
				return EXIT_FAILURE;
			}
			onechar++;
		}
		if (stdin = fopen(file_name_input, "r")) {
			if (stream = fopen(basename, "w")) {
				table = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);
				yyparse();
				g_hash_table_destroy(table);
				fclose(stream);
				fclose(stdin);
			} else {
				free(basename);
				fclose(stdin);
				fprintf(stderr, "Output filename cannot be opened\n");
				return EXIT_FAILURE;
			}
		} else {
			free(basename);
			fprintf(stderr, "Input filename cannot be opened\n");
			return EXIT_FAILURE;
		}
		free(basename);
	}

	else {
		fprintf(stderr, "No input filename given\n");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}


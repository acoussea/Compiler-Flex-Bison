.assembly essai1 {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32, int32, int32, int32)
	call string class [mscorlib]System.Console::ReadLine()
	call int32 int32::Parse(string)
	stloc	0
	ldc.i4	678
	ldc.i4	54
	ldc.i4	67
	mul
	add
	stloc	1
	ldc.i4	54
	ldc.i4	56
	sub
	ldc.i4	76
	sub
	stloc	2
	ldloc	0
	ldc.i4	2
	mul
	ldc.i4	56
	add
	stloc	3
	ldc.i4	3
	stloc	4
	ldloc	0
	ldloc	4
	beq IL_0
	ldloc	1
	ldloc	2
	bne.un IL_1
IL_0:
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif0
IL_1:
IL_endif0:
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

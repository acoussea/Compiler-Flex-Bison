.assembly essai1 {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32, int32, int32, int32, int32, int32, int32, int32)
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
	ldc.i4	110
	stloc	5
	ldc.i4	10
	stloc	6
	ldc.i4	97
	stloc	7
	ldc.i4	100
	stloc	8
	ldloc	0
	ldloc	4
	bne.un IL_1
IL_1_0:
	ldloc	0
	ldloc	4
	bne.un IL_1
IL_2_0:
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif2
IL_1:
IL_endif2:
	br IL_endif1
IL_2:
IL_endif1:
	ldloc	0
	ldloc	4
	bne.un IL_3
IL_3_2:
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif3
IL_3:
IL_5:
	ldloc	0
	ldloc	7
	bne.un IL_6
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif3
IL_6:
	ldloc	0
	ldloc	8
	bne.un IL_7
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif3
IL_8:
IL_7:
IL_3_23:
	br IL_1_condwhile
IL_23:
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_2_condwhile
IL_25:
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
	br IL_3_condwhile
IL_28:
	ldloc	5
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
IL_3_condwhile:
	ldloc	0
	ldloc	5
	bge IL_29
	br IL_28
IL_29:
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
IL_2_condwhile:
	ldloc	0
	ldloc	7
	bge IL_26
	br IL_25
IL_26:
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
IL_1_condwhile:
	ldloc	0
	ldloc	8
	bge IL_24
	br IL_23
IL_24:
IL_endif3:
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

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
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif1
IL_1:
IL_3:
	ldloc	0
	ldloc	7
	bne.un IL_4
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif1
IL_4:
	ldloc	0
	ldloc	8
	bne.un IL_5
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif1
IL_6:
IL_5:
IL_1_13:
	br IL_1_condwhile
IL_13:
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_2_condwhile
IL_15:
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
	br IL_3_condwhile
IL_18:
	ldloc	5
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
IL_3_condwhile:
	ldloc	0
	ldloc	5
	bge IL_19
	br IL_18
IL_19:
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
IL_2_condwhile:
	ldloc	0
	ldloc	7
	bge IL_16
	br IL_15
IL_16:
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
IL_1_condwhile:
	ldloc	0
	ldloc	8
	bge IL_14
	br IL_13
IL_14:
IL_endif1:
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

.assembly essai2 {}
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
	br IL_1_condwhile
IL_0:
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	0
	ldc.i4	1
	add
	stloc	0
IL_1_condwhile:
	ldloc	0
	ldloc	8
	bge IL_1
	br IL_0
IL_1:
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

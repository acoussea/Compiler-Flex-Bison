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
	ldc.i4	42
	stloc	5
	ldc.i4	10
	stloc	6
	ldc.i4	97
	stloc	7
	ldc.i4	112
	stloc	8
	ldloc	0
	ldloc	4
	bne.un IL_1
IL_0:
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif0
IL_1:
	ldloc	0
	ldloc	7
	bne.un IL_3
	ldloc	7
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif0
IL_3:
	ldloc	0
	ldloc	8
	bne.un IL_4
	ldloc	8
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif0
IL_4:
IL_5:
	ldloc	5
	call void class [mscorlib]System.Console::WriteLine(int32)
IL_endif0:
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

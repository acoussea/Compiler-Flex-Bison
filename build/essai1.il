.assembly essai1 {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32, int32, int32, int32, int32)
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
	ldc.i4	1
	stloc	4
IL_0:
	ldloc	4
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldc.i4	1
	stloc	5
IL_1:
	ldloc	5
	call void class [mscorlib]System.Console::WriteLine(int32)
	ldloc	5
	ldc.i4	1
	add
	stloc	5
	ldloc	5
	ldc.i4	10
	ble IL_1
	ldloc	4
	ldc.i4	1
	add
	stloc	4
	ldloc	4
	ldc.i4	10
	ble IL_0
	ldloc	3
	call void class [mscorlib]System.Console::WriteLine(int32)
	ret
}

.assembly essai4 {}
.method public static void Main() cil managed
{
	.entrypoint
	.maxstack 10
	.locals init (int32, int32)
	call string class [mscorlib]System.Console::ReadLine()
	call int32 int32::Parse(string)
	stloc	0
	ldc.i4	5
	stloc	1
	ldc.i4	1
	brfalse IL_1
IL_1_0:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif1
IL_1:
IL_endif1:
	ldc.i4	0
	brfalse IL_2
IL_2_1:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif2
IL_2:
IL_endif2:
	ldloc	0
	ldloc	1
	blt IL_3
IL_3_2:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif3
IL_3:
IL_endif3:
	ldloc	0
	ldloc	1
	ble IL_4
IL_4_3:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif4
IL_4:
IL_endif4:
	ldloc	0
	ldloc	1
	bge IL_5
IL_5_4:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif5
IL_5:
IL_endif5:
	ldloc	0
	ldloc	1
	bgt IL_6
IL_6_5:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif6
IL_6:
IL_endif6:
	ldloc	0
	ldloc	1
	beq IL_7
IL_7_6:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif7
IL_7:
IL_endif7:
	ldloc	0
	ldloc	1
	bne.un IL_8
IL_8_7:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif8
IL_8:
IL_endif8:
	ldloc	0
	ldloc	1
	beq IL_9
IL_9_8:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif9
IL_9:
IL_endif9:
	ldloc	0
	ldloc	1
	blt IL_10
	ldloc	0
	ldloc	1
	bne.un IL_10
IL_10_9:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif10
IL_10:
IL_endif10:
	ldloc	0
	ldloc	1
	ble IL_10
	ldloc	0
	ldloc	1
	bne.un IL_11
IL_11_10:
	ldloc	0
	call void class [mscorlib]System.Console::WriteLine(int32)
	br IL_endif11
IL_11:
IL_endif11:
	ret
}

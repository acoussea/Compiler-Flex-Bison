using System;
// mcs -out:hello.exe hello.cs
//
public class HelloWorld
{
    static public void Main ()
    {
	//bool c = true;
	int a = 3;
	int b = 4;
	if(a==b){
		Console.WriteLine("nop");
	} else if (b==3){
		Console.WriteLine("nop");
	} else if (b==4){
		Console.WriteLine("yes");
	}	
    }
}

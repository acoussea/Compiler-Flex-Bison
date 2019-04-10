using System;
// mcs -out:hello.exe hello.cs
//
public class HelloWorld
{
    static public void Main ()
    {
	//bool c = true;
	int a = 1;
	int b = 3;
	int c = 1;
	if((a==b) || (c==a)){
        	Console.WriteLine(1);
	} else {
		Console.WriteLine(0);
	}
    }
}

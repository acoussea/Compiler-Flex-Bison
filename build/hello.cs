using System;
// mcs -out:hello.exe hello.cs

public class HelloWorld
{
    static public void Main ()
    {
	int a =2;
	if(!(a==2)){
        	Console.WriteLine(a);
	} else {
		Console.WriteLine(3);
	}
    }
}

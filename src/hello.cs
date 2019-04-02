using System;
// mcs -out:hello.exe hello.cs
//
public class HelloWorld
{
    static public void Main ()
    {
	int a =2;
	bool test1 = true;
	bool test2 = false;
	bool test3 = false;
	if(test1 || test2 || test3){
        	Console.WriteLine(a);
	} else {
		Console.WriteLine(3);
	}
    }
}

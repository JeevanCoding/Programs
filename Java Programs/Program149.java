// 19/10/2021

// Accept string from user and pass the string to another class and display it

import java.util.*;

class Marvellous
{
	public void Display(String Data)
	{
		System.out.println("Welcome:"+Data);
	}
}


class Program149
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		String str;
		
		System.out.println("Enter your name");
		str=sobj.nextLine();
		
		Marvellous mobj=new Marvellous();
		mobj.Display(str);
		
	}
}

		
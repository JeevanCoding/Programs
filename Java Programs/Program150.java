


// 19/10/2021

// Accept string from user and paas to another class and display it 

import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter String");
		str=sobj.nextLine();	
	}
	
	public void Display()
	{
		System.out.println("String is:"+str);
	}
}

class Program150
{
	public static void main(String arg[])
	{
		StringX sobj=new StringX();
		sobj.Accept();
		sobj.Display();	
	}
	
}


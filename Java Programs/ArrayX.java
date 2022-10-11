// 18/10/2021
// Program146

package MarvellousNumbers;

import java.util.*;

public class ArrayX
{
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		int iCnt = 0;
		
		System.out.println("Enter elements");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		int iCnt = 0;
		
		System.out.println("Elements are : ");
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}





// Command : javac ArrayX.java -d .
// -d for new directory or folder
// . for current directory or folder
// 18/10/2021

// Addition

import java.util.*;
import MarvellousNumbers.ArrayX;


class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);	
	}
	
	public int Add()
	{
		int iSum=0,iCnt=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iSum=iSum+Arr[iCnt];
		}
		return iSum;
	}	
}

	
class Program146
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);  // Scanner class's object is used to accept the input
		int iLength=0,iRet=0;
		
		System.out.println("Enter the number of elements");
		iLength=sobj.nextInt();
		
		Marvellous mobj=new Marvellous(iLength);  // calls constructor
		mobj.Accept();
		mobj.Display();
		iRet=mobj.Add();
		
		System.out.println("Addition is:"+iRet);
		
		
	}	
}




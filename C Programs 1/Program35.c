
// Header file inclusion
#include<stdio.h>

// Function declaration
int SumEven(int);

// Entry point function
int main() 
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumEven(iValue);  // Function call
	printf("Sum of even digits are:%d\n",iRet);
	
	return 0;
}

// Function definition
int SumEven(int iNo)
{
	// Local variables

	int iSum=0,iDigit=0;
	
	
	
	if(iNo<0)  // Updator
	{
		iNo=-iNo;
	}
	
	while(iNo>0)  // O(N)  Where N is number of Digits  (N>=0)
	
	{      
	    iDigit=iNo%10;   
		
	    if((iDigit%2)==0)
		{
			iSum=iSum+iDigit;
			
		}
		iNo=iNo/10;
	}
	
			
		return iSum;
}


	
	
	
	
	
	


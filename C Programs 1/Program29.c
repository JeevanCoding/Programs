
// Header file inclusion
#include<stdio.h>

// Function declaration
int Display(int);

// Entry point function
int main() 
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);  // Function call
	printf("Addition of digits is:%d\n",iRet);
	
	return 0;
}

// Function definition
int Display(int iNo)
{
	// Local variables

	int iDigit=0,iSum=0;
	

	while(iNo>0)
	{
	    iDigit=iNo%10;          
	    iSum=iSum+iDigit;
	    iNo=iNo/10;
	}		
		return iSum;
}


	
	
	
	
	
	



// Header file inclusion
#include<stdio.h>

// Function declaration
int CountDigit(int);

// Entry point function
int main() 
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue);  // Function call
	printf("number of digits are:%d\n",iRet);
	
	return 0;
}

// Function definition
int CountDigit(int iNo)
{
	// Local variables

	int iDigit=0,iCnt=0;
	
	if(iNo==0)    // Filter
	{
		return 1;
	}
	
	if(iNo<0)  // Updator
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{          
	    iCnt++;        // iCnt=icnt+1;
	    iNo=iNo/10;
	}		
		return iCnt;
}


	
	
	
	
	
	


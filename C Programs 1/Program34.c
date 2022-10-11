
// Header file inclusion
#include<stdio.h>

// Function declaration
int CountEven(int);

// Entry point function
int main() 
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);  // Function call
	printf("number of even digits are:%d\n",iRet);
	
	return 0;
}

// Function definition
int CountEven(int iNo)
{
	// Local variables

	int iCnt=0,iDigit=0;
	
	if(iNo==0)    // Filter
	{
		return 1;
	}
	
	if(iNo<0)  // Updator
	{
		iNo=-iNo;
	}
	
	while(iNo>0)  // O(N)  Where N is number of Digits  (N>=0)
	
	{          
	    iDigit=iNo%10;   
		
	    if((iDigit%2)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	
			
		return iCnt;
}


	
	
	
	
	
	


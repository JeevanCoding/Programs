
// Header file inclusion
#include<stdio.h>

// Function declaration
void Display();

// Entry point function
int main()
{
	Display();  // Function call
	
	return 0;
}

// Function definition
void Display()
{
	// Local variables
	int iNo=7521;
	int iDigit=0;
	
	while(iNo>0)
	{
	    iDigit=iNo%10;          
	    printf("%d\n",iDigit);  
	    iNo=iNo/10;
	}		
		
}


	
	
	
	
	
	


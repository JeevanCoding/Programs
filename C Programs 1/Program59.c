



// Accept number from user and display below pattern

// Input  : 6
// Output : A B C D E F

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char ch='\0';  
	
	          // 1        2           3 
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);  // 4

	}
	printf("\n");
	
	
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}


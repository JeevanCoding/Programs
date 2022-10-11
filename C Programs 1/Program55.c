

// Accept number from user and display below pattern

// Input  : 6
// Output : a b c e d f

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char ch='a';  
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
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


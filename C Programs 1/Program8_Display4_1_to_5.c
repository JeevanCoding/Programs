#include<stdio.h>

void Display();    // Declaration

int main()
{
	Display();     // Function call
	
	return 0;
}


void Display()     // Definition
{
	int i=0;
	
	for(i=1;i<=5;i++)
	{
		printf("%d\n",i);
	}
}


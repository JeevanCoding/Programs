

#include<stdio.h>

int main()
{
	char Arr[50];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);      // 50
	
	printf("your entered name is:%s\n",Arr);

    return 0;

}
	
// 20/10/2021

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

// #include<io.h>

int main()
{
	int fd=0;
	
	fd=creat("Marvellous.txt",0777);
	
	if(fd==-1)
	{
		printf("unable to create the file\n");
	}
	else
	{
		printf("File successfully created\n");
	}
	
	return 0;
}

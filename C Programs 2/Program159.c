
// 20/10/2021

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// #include<io.h>

int main()
{
	int fd=0;
	char Fname[30];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
	}
	else
	{
		printf("File successfully opened with FD:%d\n",fd);
	}
	
	return 0;
}

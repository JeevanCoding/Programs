
// 20/10/2021

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// #include<io.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		return -1; // return to OS
	}
	else
	{
		printf("File successfully opened with FD:%d\n",fd);
		
	}
	
	iRet=write(fd,Data,10);
	
	printf("%d bytes gets successfully written in the file\n",iRet);
	
	
	return 0;
}

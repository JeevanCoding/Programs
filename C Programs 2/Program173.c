
// 25/10/2021

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// #include<io.h>

int main()
{
	int fd=0;
	char Arr[10];
	
	
	fd=open("LB17.txt",O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	//////////
	// 0 from starting position
	// 1 from current position
	// 2 from end of the file
	
	lseek(fd,-5,2);
	read(fd,Arr,5);
	
	printf("Data from file is:\n");
	
	write(1,Arr,5);
	
	printf("\n");
	
	close(fd);
	
	return 0;
}





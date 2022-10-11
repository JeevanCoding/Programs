

// 20/10/2021

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// #include<io.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[30];
    char Data[7];
    
    printf("Enter file name\n");
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDWR);
    
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;      // Return to OS
    }
    else
    {
        printf("File succesfully opened with FD : %d\n",fd);
    }
    
    iRet = read(fd,Data,7);
    
    printf("%d bytes gets succesfully read friom file\n",iRet);
    
    printf("Data from the file is:%s\n",Data);
    
    return 0;
}


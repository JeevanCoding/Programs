// in LB17 file type:Marvellous@123Demo11

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iCnt = 0, iRet = 0,i = 0;
    char fname[20];
    char Buffer[10];
    
    printf("Eneter file name\n");
    scanf("%s",fname);
    
    fd = open(fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    
    while((iRet = read(fd,Buffer,10)) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] >= '0') && (Buffer[i] <= '9' ))
            {
                iCnt++;
            }
        }
    }
    
    printf("Total number of small are : %d\n",iCnt);
    
    close(fd);
    
    return 0;
}



// Accept number and bit position from user and check whether bit at that position is ON or OFF  
// OFF: 0
// ON : 1


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo,UINT iPosition)                   
{
	UINT iMask=0x00000001;        
	UINT iResult=0; 

    if((iPosition<1)||(iPosition>32))
	{
        return false;
	}
	  
    iMask=iMask<<(iPosition-1);	   
	iResult=iNo & iMask;
	
	if(iResult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue=0,iBit=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter Position\n");
	scanf("%d",&iBit);
	
	bRet=CheckBit(iValue,iBit);
	
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}


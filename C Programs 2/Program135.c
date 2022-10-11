
// Accept number from user and check whether 1st 4 bits(1st Nibble) are ON or OFF
// OFF: 0
// ON : 1


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo)                   // 32 bits
{
	UINT iMask=0x0000000F;       // 0000 0000  0000 0000  0000 0000  0000 1111   Binary
	UINT iResult=0;              //  0    0     0    0     0    0      0   F    Hexa  
	                             // 0x0000000F    HexaDecimal
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
	UINT iValue=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("1sr bits are ON\n");
	}
	else
	{
		printf("bits are OFF\n");
	}
	
	return 0;
}




// Input  : 4 4          
// Output : $ * * *   1,1 1,2 1,3 1,4
//          * $ * *   2,1 2,2 2,3 2,4
//          * * $ *   3,1 3,2 3,3 3,4
//          * * * $   4,1 4,2 4,3 4,4	
        		
 	 

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	   // 1   2      3
	for(i=1;i<=iRow;i++)   // Outer
	{  // 1   2      3
		for(j=1;j<=iCol;j++)  // Inner     
		{  
		  if(i==j)
		  {
			printf("$\t");
		  }
		
		  else
		  {
			printf("*\t");
		  }	                                              
		 
		}
		    printf("\n");
	}
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
	
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}


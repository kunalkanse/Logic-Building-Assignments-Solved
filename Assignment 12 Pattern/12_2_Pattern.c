/*
 Accept number of rows and number of columns from user and display below
 pattern.
 
 Input : iRow =4 iCol = 4
 
 Output : 	
            *  *  *  *
		    *  *  *  #
		    *  *  #  #
		    *  #  #  #
		  
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	for(i=iRow; i>0; i--)	//ROW
	{
		for(j=1; j<=iCol; j++) //Coloumn
		{
			if((i>j) || (i==j))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows and columns\n");
	scanf("%d %d",&iValue1, &iValue2);
	
	Pattern(iValue1, iValue2);
	return 0;
}

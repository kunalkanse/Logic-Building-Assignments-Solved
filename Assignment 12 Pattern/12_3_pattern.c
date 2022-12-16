/*

1. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 5 iCol = 5

Output : 

$ * * * *
* $ * * *
* * $ * *
* * * $ *
* * * * $



*/

#include<stdio.h>
void Pattern(int iRow, int iCol);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Cols : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

void Pattern(int iRow, int iCol)
{   
    int iCnt = 1;

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++ , iCnt++)
        {
            if(i == j)
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
/*

4. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 6 iCol = 6

Output : 

*   *   *   *   *   *
*   *               *
*       *           *
*           *       *
*               *   *
*   *   *   *   *   *

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
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if ((i == j) || (i==1) || (j==1) || (i==iRow) || (j==iCol))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n");
    }
}
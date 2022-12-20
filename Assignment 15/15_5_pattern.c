/*

5. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 5 iCol = 5
Output :

1   2   3   4   5
1   2           5
1       3       5
1           4   5
1   2   3   4   5

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
            if(j==1)
            {
                printf("1\t");
            }
            else if(j==iCol)
            {
                printf("%d\t",iCol);
            }
            else if(i==j)
            {
                printf("%d\t",j);
            }
            else if((i==1) && (i<j))
            {
                printf("%d\t",j);
            }
            else if((i==iRow) && (i>j))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }

        printf("\n");
    }
}
/*

4. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 5

Output : 

4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

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
    for(int i = iRow; i >= 1; i--)
    {
        for(int j = iCol; j >= 1; j--)
        {
            printf("%d\t",i);
        }

        printf("\n");
    }
}
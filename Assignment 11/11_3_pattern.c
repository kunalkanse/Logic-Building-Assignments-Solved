/*

3. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 3 iCol = 5

Output : 

A A A A A
B B B B B
C C C C C

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
    char ch = 'A';
    for(int i = 1; i<=iRow; i++, ch++)
    {
        for(int j = iCol; j >= 1; j--)
        {
            printf("%c\t",ch);
        }

        printf("\n");
    }
}
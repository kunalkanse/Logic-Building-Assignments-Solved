/*

1. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 4

Output : 

A B C D
a b c d
A B C D
a b c d

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
    for(int i = 1; i<=iRow; i++)
    {
        char ch = '\0';

        if((i % 2) == 0)
        {
            ch = 'a';

            for(int j = iCol; j >= 1; j--)
            {
                printf("%c\t",ch);
                ch++;
            }
        }
        else
        {
            ch = 'A';

            for(int j = iCol; j >= 1; j--)
            {
                printf("%c\t",ch);
                ch++;
            }
        }

        printf("\n");
    }
}
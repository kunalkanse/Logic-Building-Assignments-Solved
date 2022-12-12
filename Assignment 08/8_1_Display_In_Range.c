/*

1.Write a program which accept range from user and display all numbers in between
that range.

Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

Input : 10 18
Output : 10 11 12 13 14 15 16 17 18

Input : 10 10
Output : 10

Input : -10 2
Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2

Input : 90 18
Output : Invalid range

*/

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

void RangeDisplay(int iStart , int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
        return;
    }
    for(int iCnt = iStart; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


/*
2.Write a program which accept number from user and display its factors in
decreasing order.

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1

*/

#include<stdio.h>

void MultFact(int);

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultFact(iValue);

    return 0;
}

void MultFact(int iNo)
{
    int iMult = 1;

    for(int iCnt = (iNo/2); iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)
        printf("%d\t",iCnt);
    }
} 
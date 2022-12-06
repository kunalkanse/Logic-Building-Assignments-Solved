
/*
4.Write a program which accept number from user and return summation of all its
non factors.

Input : 12
Output : 50

Input : 10
Output : 37

*/

#include<stdio.h>

int SumFactors(int);

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of non factors is : %d",iRet);

    return 0;
}

int SumFactors(int iNo)
{
    int iSum = 0;

    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
} 
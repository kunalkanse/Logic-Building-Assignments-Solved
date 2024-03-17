
/*

5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)

Input : 10
Output : -29 (8 - 37)


*/

#include<stdio.h>

int Difference(int);

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Difference(iValue);

    printf("Difference between factors & non-factors is : %d",iRet);

    return 0;
}

int Difference(int iNo)
{
    int iNonFact = 0, iFact = 0;

    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
        else
        {
            iFact = iFact + iCnt;
        }
    }

    return iFact-iNonFact;
} 

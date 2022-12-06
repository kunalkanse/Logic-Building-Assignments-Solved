
/*
1.Write a program which accept number from user and display its multiplication of
factors.

Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)

Input : 13
Output : 1 (1)

Input : 10
Output : 10 (1 * 2 * 5)
*/

#include<stdio.h>

int MultFact(int);

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\n%d\n",iRet);

    return 0;
}

int MultFact(int iNo)
{
    int iMult = 1;

    for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
} 

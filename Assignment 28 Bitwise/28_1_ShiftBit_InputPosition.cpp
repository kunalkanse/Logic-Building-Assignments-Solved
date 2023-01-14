#include<stdio.h>
#include<stdbool.h>

/*

1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.

Input : 79
Output : 15

*/

typedef unsigned int UINT;

UINT ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iModify = 0;
    UINT iMask =0x00000040;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        iModify = iNo ^ iMask;
        return iModify;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iValue = 0;
    UINT bRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == -1)
    {
        printf("Bit is OFF");
    }
    else
    {
        printf("modified Number is : %d",bRet);
    }
}

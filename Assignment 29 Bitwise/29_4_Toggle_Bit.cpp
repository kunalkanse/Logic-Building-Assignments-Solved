
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/**

4. Write a program which accept one number and position from user and
toggle that bit. Return modified number.

Input : 10 3
Output : 14

 */

UINT ModifyBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iModify = 0;

    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iModify = iNo ^ iMask;
    return iModify;
    
}

int main()
{
    int iValue = 0, iPos = 0;
    int iRet = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iPos);

    iRet = ModifyBit(iValue, iPos);

    printf("Modified number is : %d",iRet);

    return 0;
}

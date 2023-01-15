
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/**

1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.

Input : 10 2
Output : TRUE

 */

bool CheckBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0, iPos = 0;
    bool bRet = false;

    printf("enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iPos);

    bRet = CheckBit(iValue, iPos);

    if(bRet == true)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

}

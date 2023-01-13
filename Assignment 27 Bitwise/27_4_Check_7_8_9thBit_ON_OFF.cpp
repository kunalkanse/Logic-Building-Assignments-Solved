#include<stdio.h>
#include<stdbool.h>

// 4.check whether 7,8,9th bits of number is ON or OFF

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask =0x000001c0;

    iResult = iMask & iNo;

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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
}

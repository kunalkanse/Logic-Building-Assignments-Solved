#include<stdio.h>
#include<stdbool.h>

/*

5. Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32. 

*/

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

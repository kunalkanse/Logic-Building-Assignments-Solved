
/*

4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.

Input : 10 3 7
Output : TRUE

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x00000000, iMask2 = 0x00000000;
    UINT iResult1 = 0, iResult2 = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
    UINT iValue1 = 0,iPos1 = 0,iPos2 = 0;
    bool bRet = false;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the first number : ");
    scanf("%d",&iPos1);

    printf("Enter the first number : ");
    scanf("%d",&iPos2);

    bRet = CheckBit(iValue1,iPos1,iPos2);

    if(bRet == true)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;

}

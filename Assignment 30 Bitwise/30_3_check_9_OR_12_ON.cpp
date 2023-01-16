
/*

3. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.

Input : 10 15 (1010 1111)
Output : 2 4

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask9 = 0x00000100, iMask12 = 0x00000800;
    UINT iResult9 = 0, iResult12 = 0;

    iResult9 = iNo & iMask9;
    iResult12 = iNo & iMask12;

    if((iResult9 == iMask9) || (iResult12 == iMask12))
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
    UINT iValue1 = 0;
    bool bRet = false;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    bRet = CheckBit(iValue1);

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

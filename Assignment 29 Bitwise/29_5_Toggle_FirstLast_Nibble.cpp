
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

/**

5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits

 */

UINT ModifyBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iModify = 0;

    iModify = iNo ^ iMask;
    return iModify;
    
}

int main()
{
    int iValue = 0, iPos = 0;
    int iRet = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    iRet = ModifyBit(iValue);

    printf("Modified number is : %d",iRet);
    
    return 0;

}

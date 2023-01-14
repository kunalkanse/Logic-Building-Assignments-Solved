#include<stdio.h>
#include<stdbool.h>

/*

5. Write a program which accept one number from user and on its first 4
bits. Return modified number.

Input : 73
Output : 79

*/

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iModify = 0;
    UINT iMask =0x0000000f;

    iModify = iNo | iMask;

    return iModify;
}

int main()
{
    int iValue = 0;
    UINT bRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = ToggleBit(iValue);

    printf("modified Number is : %d",bRet);

    return 0;

}

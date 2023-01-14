#include<stdio.h>
#include<stdbool.h>

/*

4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.

Input : 137
Output : 713

*/

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iModify = 0;
    UINT iMask =0x00000240;

    iModify = iNo ^ iMask;

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

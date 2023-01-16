

/*

1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0, iCnt = 0;
    int iBit = 0;

    while(iNo != 0)
    {
        iBit = iNo % 2;

        if(iBit == 1)
        {
            iCount++;
        }

        iNo = iNo/2;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    UINT bRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CountOne(iValue);

    printf("Count of 1 is : %d",bRet);

    return 0;

}

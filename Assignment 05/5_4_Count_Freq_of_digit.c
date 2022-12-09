
/*

4.Write a program which accept number from user and count frequency of 4 in it.

Input : 2395
Output : 0

Input : 1018
Output : 0

Input : 9440
Output : 2

Input : 922432
Output : 1

*/

#include<stdio.h>
#include<stdbool.h>

int CountFreq(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFreq(iValue);
    
    printf("Count of 4 in number is : %d",iRet);
    
    return 0;
}
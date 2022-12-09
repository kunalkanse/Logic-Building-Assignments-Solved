
/*

2.Write a program which accept number from user and check whether it contains 0
in it or not.

Input : 2395
Output : There is no Zero

Input : 1018
Output : It Contains Zero

Input : 9000
Output : It Contains Zero

Input : 10687
Output : It Contains Zero

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool flag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            flag = true;
        }

        iNo = iNo / 10;
    }

    return flag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("it contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
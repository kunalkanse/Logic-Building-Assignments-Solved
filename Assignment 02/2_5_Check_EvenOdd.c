

/*
5. Accept number from user and check whether number is
even or odd. 

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int);

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*
1.Write a program which accept one number from user and print that number of
even numbers on screen.

Input : 7
Output: 2 4 6 8 10 12 14

*/

#include<stdio.h>

void Display(int);

int main()
{
    int iValue = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

void Display(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
    
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

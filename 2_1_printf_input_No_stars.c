

// 1. Accept one number from user and print that number of * on screen. 

#include<stdio.h>

void Display(int);

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}

void Display(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

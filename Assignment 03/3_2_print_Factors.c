

/*
2. Write a program which accept number from user and print factors of that
number.

Input : 24
Output: 1 2 4 6 8 12 
*/

#include<stdio.h>


void DisplayFactors(int iNo);

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

void DisplayFactors(int iNo)
{
    for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

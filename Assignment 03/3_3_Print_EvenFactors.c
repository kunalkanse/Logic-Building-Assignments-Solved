

/*
 3. Write a program which accept number from user and print even factors of that
number.

Input : 36
Output: 2 6 12 18 
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
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\t",iCnt);
        }
    }
}



/*
Accept two numbers from user and display first number in second
number of times.

Input : 12 5
Output : 12 12 12 12 12 
*/

#include<stdio.h>

void Display(int , int);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);
    
    return 0;
}

void Display(int iNo1, int iNo2)
{
    for (int iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iNo1);
    }
}

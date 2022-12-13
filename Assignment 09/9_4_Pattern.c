
/*

3. Accept number from user and display below pattern.

Input : 4
Output : # 1 * # 2 * # 3 * # 4 *


*/

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
        printf("#\t%d\t*\t",iCnt);
    }
}
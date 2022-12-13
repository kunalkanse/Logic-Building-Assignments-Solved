
/*

3. Accept number from user and display below pattern.

Input : 5
Output : 1 * 2 * 3 * 4 * 5 *

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
        printf("%d\t*\t",iCnt);
    }
}

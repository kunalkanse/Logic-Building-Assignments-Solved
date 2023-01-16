
/*

2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.

Input : 10 15 (1010 1111)
Output : 2 4

*/

#include<stdio.h>

typedef unsigned int UINT;

void DisplayCommon(UINT iNo1, UINT iNo2)
{
    UINT iResult = 0, iPos = 0, iBit = 0;

    iResult = iNo1 & iNo2;

    while(iResult > 0)
    {
        iPos++;

        iBit = iResult%2;

        if(iBit == 1)
        {
            printf("%d\t",iPos);
        }

        iResult = iResult/2;
    }
}

int main()
{
    UINT iValue1 = 0,iValue2 = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the first number : ");
    scanf("%d",&iValue2);

    DisplayCommon(iValue1,iValue2);

    return 0;

}

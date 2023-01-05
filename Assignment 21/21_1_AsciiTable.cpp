/*

1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.

*/

#include<stdio.h>

void DisplayASCII();

int main()
{
    DisplayASCII();
    return 0;
}

void DisplayASCII()
{
    char ch = '\0';

    printf("Decimal  HexaDecimal  Octal  character\n");
    
    for(int iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("   %d\t\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

/*

5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.

Input : A

Output : Decimal 65
Octal 0101
Hexadecimal 0X41

*/

#include<stdio.h>

void Display(char);

int main()
{
    char ch = '\0', cRet = '\0';

    printf("Enter the Character : ");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}

void Display(char C)
{
    printf("\nDecimal : %d\nHexaDecimal : %x\nOctal : %o\n\n",C,C,C);
}

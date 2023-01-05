/*

2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/

#include<stdio.h>

char ToggleCase(char);

int main()
{
    char ch = '\0', cRet = '\0';

    printf("Enter the Character : ");
    scanf("%c",&ch);

    cRet = ToggleCase(ch);

    printf("Converted Case : %c",cRet);
    return 0;
}

char ToggleCase(char C)
{
    if ((C>='a')&&(C<='z'))
    {
        return C-32;
    }
    else if ((C>='A')&&(C<='Z'))
    {
        return C+32;
    }
    else
    {
        return C;
    }
}

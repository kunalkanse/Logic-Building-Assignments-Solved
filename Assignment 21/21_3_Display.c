/*

3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.

Input : Q
Output : Q R S T U V W X Y Z

Input : m
Output : m l k j i h g f e d c b a

Input : 8
Output :

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
    if ((C>='a')&&(C<='z'))
    {
        char ch = C;

        while(ch != '`')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else if ((C>='A')&&(C<='Z'))
    {
        char ch = C;

        while(ch != '[')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
}
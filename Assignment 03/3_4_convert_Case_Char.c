
/*
4. Accept one character from user and convert case of that character.

Input : a Output : A

Input : D Output : d

*/

#include<stdio.h>

void ConvertCase(char);

int main()
{
    char ch = '\0';

    printf("Enter character : ");
    scanf("%c",&ch);

    ConvertCase(ch);

    return 0;
}

void ConvertCase(char c)
{
    if( (c >= 'a') && (c <= 'z') )
    {
        printf("%c",c-32);
    }
    else if( (c >= 'A') && (c <= 'Z') )
    {
        printf("%c",c+32);
    }
    else
    {
        printf("Wrong input");
    }
}

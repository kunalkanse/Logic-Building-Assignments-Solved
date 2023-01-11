
/*

2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.

Input : “Marvel lous Pyth on”

Output : “MarvellousPython”

*/

#include<stdio.h>

void StrCpyX(char[],char[]);

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30] = "\0";

    StrCpyX(arr,brr);

    printf("Copied string is : %s",brr);

    return 0;
}

void StrCpyX(char src[], char dest[])
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if(*src==' ')
        {
            src++;
        }
        else
        {
            *dest = *src;
            src++;
            dest++;
        }
    }
}

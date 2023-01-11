
/*

4. Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.

Input : “Marvellous Python 2”
Output : “marvellous python 2”

*/

#include<stdio.h>

void StrLwrX(char[],char[]);

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30] = "\0";

    StrLwrX(arr,brr);

    printf("converted string is : %s",brr);

    return 0;
}

void StrLwrX(char src[], char dest[])
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src>='A') && (*src<='Z'))
        {
            *dest = (*src)+32;
            src++;
            dest++;
        }
        else
        {
            *dest = *src;
            src++;
            dest++;
        }
    }
}

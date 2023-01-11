
/*

5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.

Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”

*/

#include<stdio.h>

void StrToggleX(char[],char[]);

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30] = "\0";

    StrToggleX(arr,brr);

    printf("converted string is : %s",brr);

    return 0;
}

void StrToggleX(char src[], char dest[])
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
        else if((*src>='a') && (*src<='z'))
        {
            *dest = (*src)-32;
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

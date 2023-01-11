
/*

3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.

Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”

*/

#include<stdio.h>

void StrUprX(char[],char[]);

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30] = "\0";

    StrUprX(arr,brr);

    printf("converted string is : %s",brr);

    return 0;
}

void StrUprX(char src[], char dest[])
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src>='a') && (*src<='z'))
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

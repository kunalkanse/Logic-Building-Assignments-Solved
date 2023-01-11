/*

1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.

Input : “Marvellous Python”
Output : “nohtyP suollevraM”

*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest);

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30] = "\0"; // Empty string

    StrCpyRev(arr,brr);

    printf("%s",brr); // nohtyP suollevraM
    return 0;
}

void StrCpyRev(char *src, char *dest)
{
    char *temp = src;

    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        src++;
    }

    src--;

    while(src >= temp)
    {
        *dest = *src;
        dest++;
        src--;
    }
}

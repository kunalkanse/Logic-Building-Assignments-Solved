
/*

3. Write a program which accept string from user and copy capital
characters of that string into another string.

Input : “Marvellous Multi OS”

Output : “MMOS”

*/

#include<stdio.h>

void StrCpYCap(char *src, char *dest);

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "\0"; // Empty string

    StrCpYCap(arr,brr);

    printf("%s",brr); // MMOS

    return 0;
}

void StrCpYCap(char *src, char *dest)
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src>='A') && (*src<='Z'))
        {
            *dest = *src;
            dest++;
        }

        src++;

    }
}

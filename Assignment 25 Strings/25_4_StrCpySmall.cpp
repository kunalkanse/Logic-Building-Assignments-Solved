
/*

4. Write a program which accept string from user and copy small
characters of that string into another string.

Input : Marvellous multi OS
Output : arvellous multi

*/

#include<stdio.h>

void StrCpYSmall(char *src, char *dest);

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "\0"; // Empty string

    StrCpYSmall(arr,brr);

    printf("%s",brr); // MMOS

    return 0;
}

void StrCpYSmall(char *src, char *dest)
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src>='a') && (*src<='z') || (*src==' '))
        {
            *dest = *src;
            dest++;
        }

        src++;
    }
}

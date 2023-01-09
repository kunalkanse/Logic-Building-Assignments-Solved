/*

3.Write a program which accept string from user and toggle the case.

Input : Marvellous Multi OS
Output : mARVELLOUS mULTI os

*/

#include<stdio.h>

void strToggleX(char *str);

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strToggleX(arr);

    return 0;
}

void strToggleX(char *str)
{
    
    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            printf("%c",(*str)-32);
        }
        else if((*str>='A') && (*str<='Z'))
        {
            printf("%c",(*str)+32);
        }
        else
        {
            printf("%c",*str);
        }

        str++;
    }
}

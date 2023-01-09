/*

2.Write a program which accept string from user and convert it into
upper case.

Input : Marvellous Multi OS
Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>

void struprX(char *str);

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    struprX(arr);

    return 0;
}

void struprX(char *str)
{
    
    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            printf("%c",(*str)-32);
        }
        else
        {
            printf("%c",*str);
        }

        str++;
    }
}

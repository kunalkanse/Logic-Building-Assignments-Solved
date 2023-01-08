/*

3. Write a program which accept string from user and display it inn
reverse order.

Input : “MarvellouS”
Output : “SuollevraM”
*/

#include<stdio.h>

void Reverse(char *str);

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}

void Reverse(char *str)
{
    char *End = str;
    char *Temp = str;

    while(*str != '\0')
    {
        End++;
        str++;
    }
    End--;

    while(End >= Temp)
    {
        printf("%c",*End);
        End--;
    }
}

/*

4. Write a program which accept string from user and display only
digits from that string.

Input : “marve89llous121”
Output : 89121

Input : “Demo”

*/

#include<stdio.h>

void DisplayDigits(char *str);

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);

    return 0;
}

void DisplayDigits(char *str)
{
    
    while(*str != '\0')
    {
        if((*str>='0') && (*str<='9'))
        {
            printf("%c",*str);
        }

        str++;
    }
}

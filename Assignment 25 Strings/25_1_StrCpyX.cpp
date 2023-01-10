

/*

1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS” 

in another string

*/

#include<stdio.h>

void StrCpyX(char[],char[]);

int main()
{
    char arr[30] = "\0";
    char brr[30] = "\0";

    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);

    printf("Copied string is : %s",brr);

    return 0;
}

void StrCpyX(char src[], char dest[])
{
    if(src == NULL)
    {
        return;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
}

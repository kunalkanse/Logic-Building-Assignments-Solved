/*

5. Write a program which accept string from user reverse that string
in place.

Input : “abcd”
Output : “dcba”

Input : “abba”
Output : “abba”

*/

#include<stdio.h>

void strRevX(char *str);

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strRevX(arr);

    printf("Modified String is : %s",arr);
    
    return 0;
}

void strRevX(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*str != '\0')
    {
        End++;
        str++;
    }
    End--;

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }

}

/*

1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”
e
Output : TRUE

Input : “Marvellous Multi OS”
W
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char C);

int main()
{
    char arr[50] , ch = '\0';
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&ch);

    bRet = CheckChar(arr,ch);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}

bool CheckChar(char *str, char C)
{

    while(*str != '\0')
    {
        if(*str == C)
        {
            return true;
        }
        str++;
    }

    return false;
}

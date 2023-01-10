/*

2.Write a program which accept string from user and accept one
character. Return frequency of that character.

Input : “Marvellous Multi OS”
M
Output : 2

Input : “Marvellous Multi OS”
W
Output : 0

*/

#include<stdio.h>

int CharFreq(char *str, char C);

int main()
{
    char arr[50] , ch = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&ch);

    iRet = CharFreq(arr,ch);

    printf("Frequeny of character is : %d",iRet);

    return 0;
}

int CharFreq(char *str, char C)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == C)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

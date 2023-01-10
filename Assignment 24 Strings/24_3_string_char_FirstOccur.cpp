/*

3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.

Input : “Marvellous Multi OS”
M
Output : 0

Input : “Marvellous Multi OS”
W
Output : -1

Input : “Marvellous Multi OS”
e
Output : 4

*/

#include<stdio.h>

int FirstOccur(char *str, char C);

int main()
{
    char arr[50] , ch = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&ch);

    iRet = FirstOccur(arr,ch);
    
    if(iRet == -1)
    {
        printf("Character not present");
        return 0;
    }
    else
    {
    printf("First Occurance is at : %d",iRet);
    }

    return 0;
}

int FirstOccur(char *str, char C)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        if(*str == C)
        {
            return iCnt;
        }
        str++;
    }

    return -1;
}

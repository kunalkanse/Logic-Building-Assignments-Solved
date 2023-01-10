/*

4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.

Input : “Marvellous Multi OS”
M
Output : 11

Input : “Marvellous Multi OS”
W
Output : -1

Input : “Marvellous Multi OS”
e
Output : 4

*/

#include<stdio.h>

int LastOccur(char *str, char C);

int main()
{
    char arr[50] , ch = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&ch);

    iRet = LastOccur(arr,ch);
    
    if(iRet == -1)
    {
        printf("Character not present");
        return 0;
    }
    else
    {
    printf("Last Occurance is at : %d",iRet);
    }

    return 0;
}

int LastOccur(char *str, char C)
{
    int iCnt = 0, index = 0;

    while(*str != '\0')
    {
        iCnt++;
        if(*str == C)
        {
            index = iCnt;
        }
        str++;
    }

    if(index == 0)
    {
        return -1;
    }
    else
    {
        return index;
    }
}

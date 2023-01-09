/*

5. Write a program which accept string from user and count number of
white spaces

Input : “MarvellouS”
Output : 0

Input : “MarvellouS Infosystems”
Output : 1

Input : MarvellouS Infosystems by Piyush Manohar Khairnnar
Output : 5

*/

#include<stdio.h>

int CountSpaces(char *str);

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSpaces(arr);

    printf("Count of spaces : %d",iRet);

    return 0;
}

int CountSpaces(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

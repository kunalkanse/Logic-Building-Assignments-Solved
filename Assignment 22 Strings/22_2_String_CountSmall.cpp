
/*

2. Write a program which accept string from user and count number of
small characters.

Input : “Marvellous”

Output : 9

*/

#include<stdio.h>

int CountSmall(char[]);

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Count of small Characters : %d",iRet);

    return 0;
}

int CountSmall(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iCount++;
        }
        
        str++;

    }

    return iCount;
}

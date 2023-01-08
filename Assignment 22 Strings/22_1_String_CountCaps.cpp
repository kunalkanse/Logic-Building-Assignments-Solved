
/*

1.Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4

*/

#include<stdio.h>

int CountCaps(char[]);

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaps(Arr);

    printf("Count of Capital Characters : %d",iRet);

    return 0;
}

int CountCaps(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            printf("%d\t",iCount);
            iCount++;
        }
        
        str++;

    }

    return iCount;
}

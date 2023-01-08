
/*

3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)

*/

#include<stdio.h>

int Difference(char[]);

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference : %d",iRet);

    return 0;
}

int Difference(char *str)
{
    int iCap = 0,iSmall = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iSmall++;
        }
        else if((*str>='A') && (*str<='Z'))
        {
            iCap++;
        }
        
        str++;
    }

    return iSmall-iCap;
}

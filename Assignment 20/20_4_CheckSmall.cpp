
/*

4. Accept Character from user and check whether it is small case or
not (a-z).

Input : g
Output : TRUE

Input : D
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckSmall(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("it is Small");
    }
    else
    {
        printf("it is not Small");
    }

    return 0;
}

bool CheckSmall(char C)
{
    if((C >= 'a') && (C <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*

4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).

Input : %
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckSymbol(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckSymbol(ch);

    if(bRet == true)
    {
        printf("it is Symbol");
    }
    else
    {
        printf("it is not Symbol");
    }

    return 0;
}

bool CheckSymbol(char C)
{
    if(((C >= 'a') && (C <= 'z')) || ((C >= 'A') && (C <= 'Z')) || ((C >= '0') && (C <= '9')))
    {
        return false;
    }
    else
    {
        return true;
    }
}

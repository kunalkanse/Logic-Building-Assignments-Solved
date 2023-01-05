
/*

2. Accept Character from user and check whether it is capital or not
(A-Z).

Input : F
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckCapital(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("it is capital");
    }
    else
    {
        printf("it is not capital");
    }

    return 0;
}

bool CheckCapital(char C)
{
    if((C >= 'A') && (C <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*

3. Accept Character from user and check whether it is digit or not
(0-9).

Input : 7
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckDigit(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        printf("it is Digit");
    }
    else
    {
        printf("it is not Digit");
    }

    return 0;
}

bool CheckDigit(char C)
{
    if((C >= '0') && (C <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

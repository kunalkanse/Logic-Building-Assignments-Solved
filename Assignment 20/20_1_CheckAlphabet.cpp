
/*

1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).

Input : F
Output : TRUE

Input : &
Output : FALSE

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckAlphabet(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckAlphabet(ch);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}

bool CheckAlphabet(char C)
{
    if( ((C >= 'a') && (C <= 'z')) || ( (C >= 'A') && (C <= 'Z') ))
    {
        return true;
    }
    else
    {
        return false;
    }
}

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

/*
5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

// typedef bool BOOL;

void DisplaySchedule(char chDiv);

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your devision : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    return 0;
}

void DisplaySchedule(char chDiv)
{
    if( (chDiv == 'A') || (chDiv == 'a') )
    {
        printf("Your Exam at 7:00 AM");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your Exam at 8:30 AM");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your Exam at 9:20 AM");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your Exam at 10:30 AM");
    }
    else
    {
        printf("Wrong Division");
    }
}

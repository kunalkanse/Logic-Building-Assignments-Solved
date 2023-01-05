
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

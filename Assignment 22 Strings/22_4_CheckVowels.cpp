
/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : marvellous
Output : TRUE

Input : Demo
Output : TRUE

Input : xyz
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CountVowels(char *Brr)
{
    if(Brr == NULL)
    {
        return -1;
    }

    while(*Brr != '\0')
    {
        if((*Brr == 'a') || (*Brr == 'e') || (*Brr == 'i') || (*Brr == 'o') || (*Brr == 'u') || (*Brr == 'A') || (*Brr == 'E') || (*Brr == 'I') || (*Brr == 'O') || (*Brr == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }

        Brr++;
    }
}

int main()
{
    char Arr[30];
    bool bRet = 0;

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    bRet = CountVowels(Arr);

    if(bRet == true)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no vowels");
    }

    return 0;
}

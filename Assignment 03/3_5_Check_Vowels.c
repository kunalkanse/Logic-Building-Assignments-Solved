
/*
5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.

Input : E Output : TRUE

Input : d Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckVowels(char);

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckVowels(ch);

    if(bRet == true)
    {
        printf("\n\ncharacter is vowel\n\n");
    }    
    else
    {
        printf("\n\ncharacter is not vowels\n\n");
    }

    return 0;
}

bool CheckVowels(char c)
{
    if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'A') || (c == 'O') || (c == 'I') || (c == 'O') || (c == 'U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

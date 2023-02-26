

/*

4. Write a program which accepts file name and one character from user and
count number of occurrences of that characters from that file.

Input : Demo.txt 
        'i'

Output : Frequency of M is 7

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

int CountChar(char FName[] , char ch)
{
    int fd = 0 , iRet = 0, iCnt = 0;
    char Buffer[10];

    fd = open(FName , O_RDONLY);
    lseek(fd,0,0);

    if(fd == -1)
    {
        cout<<"unable to open file\n\n";
        return -1;
    }
    else
    {
        cout<<"File opened successfully\n\n";
    }

    while((iRet = read(fd , Buffer , 10)) != 0)
    {
        for(int i = 0; i < iRet ; i++)
        {
            if(Buffer[i] == ch)
            {
                iCnt++;
            }
        }
    }

    return iCnt;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);

    if(iRet == -1)
    {
        return 0;
    }
    else
    {
        printf("Count of character are %d",iRet);
    }
    
    return 0;
}
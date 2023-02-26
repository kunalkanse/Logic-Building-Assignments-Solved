

/*

3. Write a program which accepts file name from user and count number of
white spaces from that file.

Input : Demo.txt

Output : Number of white spaces are 13

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

int CountSpaces(char FName[])
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
            if(Buffer[i] == ' ')
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

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountSpaces(FileName);

    if(iRet == -1)
    {
        return 0;
    }
    else
    {
        printf("Number of spaces are %d",iRet);
    }
    
    return 0;
}
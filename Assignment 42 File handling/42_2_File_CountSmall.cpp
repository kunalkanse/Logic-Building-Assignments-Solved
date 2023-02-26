

/*

2. Write a program which accepts file name from user and count number of
small characters from that file.

Input : Demo.txt

Output : Number of small characters are 21

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

int CountSmall(char FName[])
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
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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

    iRet = CountSmall(FileName);

    if(iRet == -1)
    {
        return 0;
    }
    else
    {
        printf("Number of small characters are %d",iRet);
    }
    
    return 0;
}
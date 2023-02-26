

/*

1. Write a program which accepts file name from user and count number of
capital characters from that file.

Input : Demo.txt

Output : Number of capital characters are 23

*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

int CountCapital(char FName[])
{
    // Open file in read mode
    // Read the data into local array
    // Count capital characters
    // Close the file
    // Return its frequency.

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
            if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
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

    iRet = CountCapital(FileName);

    if(iRet == -1)
    {
        return 0;
    }
    else
    {
        printf("Number of Capital characters are %d",iRet);
    }
    
    return 0;
}

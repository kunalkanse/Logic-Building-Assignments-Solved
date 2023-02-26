

/*

5. Write a program which accepts file name and one count from user and read
that number of characters from starting position.
 
Input : Demo.txt 12

Output : Display first 12 characters from Demo.txt

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

using namespace std;

void Display(char FName[] , int iNo)
{
    int fd = 0 , iRet = 0;
    char Buffer[iNo];

    fd = open(FName , O_RDONLY);
    lseek(fd,0,0);

    if(fd == -1)
    {
        cout<<"unable to open file\n\n";
        return;
    }
    else
    {
        cout<<"File opened successfully\n\n";
    }

    iRet = read(fd , Buffer , iNo);

    write(1,Buffer,iRet);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter how many character to display : ");
    cin>>iValue;

    Display(FileName , iValue);
    
    return 0;
}

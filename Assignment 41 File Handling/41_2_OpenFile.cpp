#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

/*

1. Write application which accept file name from user and open that file in read mode.

Input : Demo.txt

Output : File opened successfully.

*/

class FileCreation
{
    public:
        int fd = 0;
        char Fname[20];

        FileCreation(char * fname)
        {
            strcpy(Fname,fname);
        }

        int OpenFile()
        {
            fd = open(Fname , O_RDONLY);

            if(fd == -1)
            {
                cout<<"Unable to Open file : ";
                return 0;
            }
            else
            {
                cout<<"File Opened successfully";
            }

            close(fd);
        }
};

int main()
{
    char Name[20];

    cout<<"Enter the file name to open: ";
    cin>>Name;

    FileCreation fobj(Name);

    fobj.OpenFile();

    return 0;
}
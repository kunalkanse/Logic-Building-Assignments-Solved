#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

/*

1. Write application which accept file name from user and create that file.

Input : Demo.txt

Output : File created successfully.

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

        int CreatFile()
        {
            fd = creat(Fname , 0777);

            if(fd == -1)
            {
                cout<<"Unable to create file : ";
                return 0;
            }
            else
            {
                cout<<"File created successfully";
            }
        }
};

int main()
{
    char Name[20];

    cout<<"Enter the file name : ";
    cin>>Name;

    FileCreation fobj(Name);

    fobj.CreatFile();

    return 0;
}

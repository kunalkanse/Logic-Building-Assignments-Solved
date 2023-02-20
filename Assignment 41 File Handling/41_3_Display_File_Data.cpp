#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

/*

3. Write application which accept file name from user and read all data from that file
and display contents on screen.

Input : Demo.txt

Output : Display all data of file.

*/

class FileCreation
{
    public:
        int fd = 0;
        char Fname[20];
        char Buffer[1024];

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
                cout<<"File Opened successfully"<<endl;
            }
        }
        
        void Display()
        {
            int iRet = 0;

            cout<<"\nData from the file : ";
            while((iRet = read(fd,Buffer,sizeof(Buffer)) ) != 0)
            {
                write(1 , Buffer , iRet);
            }
        }
};

int main()
{
    char Name[20];

    cout<<"Enter the file name to open: ";
    cin>>Name;

    FileCreation fobj(Name);

    fobj.OpenFile();
    fobj.Display();

    return 0;
}
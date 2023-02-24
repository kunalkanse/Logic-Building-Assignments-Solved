
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
        
        int FileSize()
        {
            int iRet = 0;
            int iCnt = 0;

            while((iRet = read(fd,Buffer,sizeof(Buffer)) ) != 0)
            {
                iCnt = iCnt + iRet;
            }

            return iCnt;
        }
};

int main()
{
    char Name[20];
    int iSize = 0;

    cout<<"Enter the file name to open: ";
    cin>>Name;

    FileCreation fobj(Name);

    fobj.OpenFile();
    iSize = fobj.FileSize();

    cout<<"File size is : "<<iSize<<endl;

    return 0;
}
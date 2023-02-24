
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

/*

5. Write application which accept file name from user and one string from user. Write
that string at the end of file.

Input : Demo.txt
        Hello World

Output : Write Hello World at the end of Demo.txt file

*/

class FileCreation
{
    public:
        int fdopen = 0;
        int fdlseek = 0;
        char Fname[20];
        char Data[1024] = "Hello World";

        FileCreation(char * fname)
        {
            strcpy(Fname,fname);
        }

        int OpenFile()
        {
            fdopen = open(Fname , O_RDWR);

            if(fdopen == -1)
            {
                cout<<"Unable to Open file : ";
                return 0;
            }
            else
            {
                cout<<"File Opened successfully"<<endl;
            }
        }

        int Size()
        {
            int iCnt = 0;
            char *str = Data;

            while((*str != '\0'))
            {
                cout<<*str<<endl;
                iCnt++;
                str++;
            }

            return iCnt;
        }
        
        void WriteFile()
        {
            fdlseek = lseek(fdopen , 0 , 2);

            write(fdopen , Data , Size());
        }
};

int main()
{
    char Name[20];
    char Data[1024];

    cout<<"Enter the file name to open: ";
    cin>>Name;

    FileCreation fobj(Name);

    fobj.OpenFile();
    fobj.WriteFile();

    return 0;
}
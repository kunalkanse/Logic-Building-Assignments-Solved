/*

1. Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
false 

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckNo(int *, int , int);

int main()
{
    int *Arr = NULL;
    int iLength = 0; 
    bool bRet = FALSE;
    int iCheck = 0;

    printf("Enter the size of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc (sizeof(int) * iLength);

    if(Arr == NULL)
    {
        return -1;
    }

    printf("Enter Elements : ");

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Enter the element to find : ");
    scanf("%d",&iCheck);

    bRet = CheckNo(Arr , iLength , iCheck);

    if(bRet == TRUE)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    free(Arr);

    return 0;
}

bool CheckNo(int Brr[] , int iSize , int iNo)
{
    
    bool flag = FALSE;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == iNo)
        {
            flag = TRUE;
        }
    }

    return flag;
}

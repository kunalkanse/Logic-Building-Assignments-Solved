/*

2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

int FirstOccur(int *, int , int);

int main()
{
    int *Arr = NULL;
    int iLength = 0; 
    int iRet = 0;
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

    printf("Enter the element to find frequency : ");
    scanf("%d",&iCheck);

    iRet = FirstOccur(Arr , iLength , iCheck);

    printf("First Occurance of Number is at %d index",iRet);

    free(Arr);

    return 0;
}

int FirstOccur(int Brr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == iNo)
        {
            break;
        }
    }

    return iCnt;
}

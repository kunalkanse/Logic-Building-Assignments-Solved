/*

5. Accept N numbers from user and return product of all odd elements.

Input : N : 6
Elements :15 66 3 70 10 88
Output : 45

Input : N : 6
Elements :44 66 72 70 10 88
Output : 0

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

int OddProduct(int *, int , int);

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0, iCheck = 0;

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

    iRet = LastOccur(Arr , iLength , iCheck);

    printf("Last Occurance of Number is at %d index",iRet);

    free(Arr);

    return 0;
}

int LastOccur(int Brr[] , int iSize , int iNo)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Brr[iCnt] == iNo)
        {
            break;
        }
    }

    return iCnt;
}

/*

2. Accept N numbers from user and return the smallest number.

Input : N : 6
Elements :85 66 3 66 93 88
Output : 3


*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int Smallest(int *, int);

int main()
{
    int *Arr = NULL;
    int iLength = 0, iRet = 0;

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


    iRet = Smallest(Arr,iLength);

    printf("Smallest number of Array is : %d",iRet);

    free(Arr);

    return 0;
}

int Smallest(int Brr[] , int iSize)
{
    int iMin = Brr[0];

    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] < iMin)
        {
            iMin = Brr[iCnt];
        }
    }

    return iMin;
}

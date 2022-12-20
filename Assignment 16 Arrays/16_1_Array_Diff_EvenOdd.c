/*

1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.

Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int *, int);

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

    iRet = Difference(Arr , iLength);

    printf("difference between sum of even & odd elements : %d",iRet);

    free(Arr);

    return 0;
}

int Difference(int Brr[] , int iSize)
{
    int iEven = 0, iOdd = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Brr[iCnt] % 2) == 0)
        {
            iEven = iEven + Brr[iCnt];
        }
        else
        {
            iOdd = iOdd + Brr[iCnt];
        }
    }

    return iEven-iOdd;
}

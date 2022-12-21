/*

1. Accept N numbers from user and return frequency of even numbers.
Input : N : 6

Elements :85 66 3 80 93 88

Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *, int);

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

    iRet = Frequency(Arr , iLength);

    printf("Difference between Frequency of even & Odd elements : %d",iRet);

    free(Arr);

    return 0;
}

int Frequency(int Brr[] , int iSize)
{
    int iEven = 0, iOdd = 0;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Brr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    return iEven-iOdd;
}

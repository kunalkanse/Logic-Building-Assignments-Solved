/*

3. Accept N numbers from user and return the difference between largest
and smallest number.

Input : N : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)


*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

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


    iRet = Difference(Arr,iLength);

    printf("Difference of Smallest & largest number of Array is : %d",iRet);

    free(Arr);

    return 0;
}

int Difference(int Brr[] , int iSize)
{
    int iMin = 0, iMax = 0;

    iMin = iMax = Brr[0];

    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] < iMin)
        {
            iMin = Brr[iCnt];
        }
        else if (Brr[iCnt] > iMax)
        {
            iMax = Brr[iCnt];
        }
        
    }

    return iMax-iMin;
}

/*

5. Accept N numbers from user and display summation of digits of each
number.

Input : N : 6
Elements :8225 665 3 76 953 858
Output : 17 17 3 13 17 21

*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

void Digit3(int *, int);

int main()
{
    int *Arr = NULL;
    int iLength = 0;

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

    Digit3(Arr,iLength);

    free(Arr);

    return 0;
}

void Digit3(int Brr[] , int iSize)
{
    int iDigit = 0, iCount = 0, iTemp = 0,iSum = 0;    

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {   iSum = 0;
        iTemp = Brr[iCnt];

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        
        printf("%d\t",iSum);
    }
}

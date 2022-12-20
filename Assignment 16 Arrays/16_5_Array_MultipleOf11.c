/*

5. Accept N numbers from user and display all such elements which are
multiples of 11.

Input : N : 6

Elements :85 66 3 55 93 88

Output : 66 55 88

*/

#include<stdio.h>
#include<stdlib.h>

void Multiple_Of_11(int *, int);

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

    Multiple_Of_11(Arr , iLength);

    free(Arr);

    return 0;
}

void Multiple_Of_11(int Brr[] , int iSize)
{
    int iEven = 0, iOdd = 0;

    printf("Elements which multiples of 11 are : ");

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Brr[iCnt] % 11) == 0))
        {
            printf("%d\t",Brr[iCnt]);
        }
        
    }
}
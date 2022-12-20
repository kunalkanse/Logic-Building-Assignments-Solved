/*

3. Accept N numbers from user and display all such elements which are
even and divisible by 5.

Input : N : 6

Elements :85 66 3 80 93 88

Output : 80

*/

#include<stdio.h>
#include<stdlib.h>

void DivBy5Even(int *, int);

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

    DivBy5Even(Arr , iLength);

    free(Arr);

    return 0;
}

void DivBy5Even(int Brr[] , int iSize)
{
    int iEven = 0, iOdd = 0;

    printf("Even Elements which divisible by 5 are : ");

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Brr[iCnt] % 5) == 0) && ((Brr[iCnt] % 2) == 0))
        {
            printf("%d\t",Brr[iCnt]);
        }
        
    }
}
/*

4. Accept N numbers from user and accept Range, Display all elements from
that range

Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

void DisplayRange(int *, int , int, int);

int main()
{
    int *Arr = NULL;
    int iLength = 0 , iStart = 0, iEnd = 0;

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

    printf("Enter the range: \n Starting point : ");
    scanf("%d",&iStart);

    printf("Ending point : ");
    scanf("%d",&iEnd);

    DisplayRange(Arr , iLength , iStart , iEnd);

    free(Arr);

    return 0;
}

void DisplayRange(int Brr[] , int iSize , int iStart , int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( (Brr[iCnt]>iStart) && (Brr[iCnt]<iEnd) )
        {
            printf("%d\t",Brr[iCnt]);
        }
    }
}

/*

4. Accept N numbers from user and return frequency of 11 form it.

Input : N : 6
Elements :85 66 3 15 93 88
Output : 0

Input : N : 6
Elements :85 11 3 15 11 111
Output : 2

*/

#include<stdio.h>
#include<stdlib.h>

int CheckNo(int *, int);

int main()
{
    int *Arr = NULL;
    int iLength = 0; 
    int iRet = 0;

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

    iRet = CheckNo(Arr , iLength);

    printf("Frequency of 11 is : %d",iRet);
    
    free(Arr);

    return 0;
}

int CheckNo(int Brr[] , int iSize)
{
    
    int ifreq = 0;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == 11)
        {
            ifreq++;
        }
    }

    return ifreq;
}
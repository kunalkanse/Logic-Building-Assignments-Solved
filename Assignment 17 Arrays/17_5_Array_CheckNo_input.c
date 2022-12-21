/*

5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 8
Output : 2

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : 0

*/


#include<stdio.h>
#include<stdlib.h>

int CheckNo(int *, int , int);

int main()
{
    int *Arr = NULL;
    int iLength = 0; 
    int iRet = 0;
    int iCheck = 0;

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

    iRet = CheckNo(Arr , iLength , iCheck);

    printf("Frequency of %d is : %d",iCheck,iRet);
    
    free(Arr);

    return 0;
}

int CheckNo(int Brr[] , int iSize , int iNo)
{
    
    int ifreq = 0;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == iNo)
        {
            ifreq++;
        }
    }

    return ifreq;
}

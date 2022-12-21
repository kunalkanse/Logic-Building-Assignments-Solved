/*

3. Accept N numbers from user check whether that numbers contains 11 in
it or not.

Input : N : 6
Elements :85 66 11 80 93 88
Output : 11 is present

Input : N : 6
Elements :85 66 3 80 93 88
Output : 11 is absent

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNo(int *, int);

int main()
{
    int *Arr = NULL;
    int iLength = 0; 
    bool bRet = false;

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

    bRet = CheckNo(Arr , iLength);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is Absent");
    }

    free(Arr);

    return 0;
}

bool CheckNo(int Brr[] , int iSize)
{
    
    bool flag = false;
    
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == 11)
        {
            flag = true;
        }
    }

    return flag;
}


/*

3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)

Input : 5
Output : 5000

Input : 12
Output : 12000
*/

#include<stdio.h>

int KmToMeter(int iNo);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("%d km = %d M",iValue,iRet);

    return 0;
}

int KmToMeter(int iNo)
{
    return (iNo*1000);
}
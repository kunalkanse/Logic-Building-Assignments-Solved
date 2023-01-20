
/* 

2.Write a program which accept number from user and return the
count of odd digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0

*/


import java.util.*;

class Digits
{
    public int iNo = 0;

    public Digits(int iNum)
    {
        iNo = iNum;
    }

    public int CountOddDigits()
    {
        int iDigit = 0,iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) != 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

public class Program33_2_Count_Odd_Digits
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0,iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits Dobj = new Digits(iValue);

        iRet = Dobj.CountOddDigits();

        System.out.println("Count of Odd Digits Of "+iValue+" is "+iRet);
    }   
}

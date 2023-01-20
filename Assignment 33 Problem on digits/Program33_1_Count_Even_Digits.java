
/* 

1.Write a java program which accept number from user and return the
count of even digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 4

*/


import java.util.*;

class Digits
{
    public int iNo = 0;

    public Digits(int iNum)
    {
        iNo = iNum;
    }

    public int CountEvenDigits()
    {
        int iDigit = 0,iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

public class Program33_1_Count_Even_Digits
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0,iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits Dobj = new Digits(iValue);

        iRet = Dobj.CountEvenDigits();

        System.out.println("Count of Even Digits Of "+iValue+" is "+iRet);
    }   
}

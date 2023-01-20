
/* 

3.Write a program which accept number from user and return the
count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

Input : 9922
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

    public int Count()
    {
        int iDigit = 0,iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }

            iNo = iNo / 10;
        }

        return iCount;
    }
}

public class Program33_3_Count_Range_Digits
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0,iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits Dobj = new Digits(iValue);

        iRet = Dobj.Count();

        System.out.println("Count is "+iRet);
    }   
}

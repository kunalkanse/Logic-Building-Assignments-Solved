
/* 

4.Write a program which accept number from user and return
multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864

*/


import java.util.*;

class Digits
{
    public int iNo = 0;

    public Digits(int iNum)
    {
        iNo = iNum;
    }

    public int mult()
    {
        int iDigit = 0,iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iNo = iNo / 10;
                continue;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }

        return iMult;
    }
}

public class Program33_4_Digit_Mult
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0,iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits Dobj = new Digits(iValue);

        iRet = Dobj.mult();

        System.out.println("multiplication is "+iRet);
    }   
}

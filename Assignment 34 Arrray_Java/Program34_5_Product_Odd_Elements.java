
/*

5. Write java program which accept N numbers from user and return
product of all odd elements.

Input : N : 6
Elements :15 66 3 70 10 88
Output : 45

Input : N : 6
Elements :44 66 72 70 10 88
Output : 0

*/

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Array Elements : ");
        for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
}

class ArrayClass extends ArrayX
{
    public ArrayClass(int iLength)
    {
        super(iLength);
    }

    public int mult()
    {
        int iCnt = 0, iMult = 1;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iMult = iMult * Arr[iCnt];
            }
        }

        return iMult;
    }
}

class Program34_5_Product_Odd_Elements
{
    public static void main(String[] args)
    {
        int iSize = 0,iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        ArrayClass ADobj = new ArrayClass(iSize);

        ADobj.Accept();
        iRet = ADobj.mult();

        System.out.println("Multiplication is : "+iRet);
    }
}




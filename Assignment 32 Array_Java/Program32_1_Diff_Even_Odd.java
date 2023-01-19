
/*

1. Write Java program which accept N numbers from user and return
difference between summation of even elements and summation of
odd elements.

Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)

*/

import java.util.*;

class ArrayX
{
    int Arr[];

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

class ArrayDiff extends ArrayX
{
    public ArrayDiff(int iLength)
    {
        super(iLength);
    }

    public int DiffEvenOdd()
    {
        int iEven = 0,iOdd = 0,iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iEven = iEven + Arr[iCnt];
            }
            else
            {
                iOdd = iOdd + Arr[iCnt];
            }
        }

        return iEven-iOdd;
    }
}

class Program32_1_Diff_Even_Odd
{
    public static void main(String[] args)
    {
        int iSize = 0,iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        ArrayDiff ADobj = new ArrayDiff(iSize);

        ADobj.Accept();
        iRet = ADobj.DiffEvenOdd();

        System.out.println("Difference is : "+iRet);
    }
}

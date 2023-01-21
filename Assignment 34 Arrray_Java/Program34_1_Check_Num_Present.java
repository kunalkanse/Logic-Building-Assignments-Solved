
/*

1. Write java program which accept N numbers from user and accept
one another number as NO , check whether NO is present or not.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE

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

    public boolean Check(int iNo)
    {
        int iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return true;
            }
        }

        return false;
    }
}

class Program34_1_Check_Num_Present
{
    public static void main(String[] args)
    {
        int iSize = 0,iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the number to find : ");
        iValue = sobj.nextInt();

        ArrayClass ADobj = new ArrayClass(iSize);

        ADobj.Accept();
        bRet = ADobj.Check(iValue);

        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is not present");
        }

    }
}

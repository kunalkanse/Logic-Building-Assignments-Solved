
/*

4. Write java program which accept N numbers from user and accept
Range, Display all elements from that range

Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :

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

    public void Check(int iNo,int start, int end)
    {
        int iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > start) && (Arr[iCnt] < end))
            {
                System.out.println(Arr[iCnt] + " ");
            }
        }
    }
}

class Program34_4_Display_in_Range
{
    public static void main(String[] args)
    {
        int iSize = 0,iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        System.out.print("Enter the range : \n starting number : ");
        int iStart = sobj.nextInt();

        System.out.print("Ending number : ");
        int iEnd = sobj.nextInt();

        ArrayClass ADobj = new ArrayClass(iSize);

        ADobj.Accept();
        ADobj.Check(iValue,iStart,iEnd);

    }
}

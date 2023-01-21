
/*

2. Write java program which accept N numbers from user and accept
one another number as NO , return index of first occurrence of that
NO.

Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

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

    public int Check(int iNo)
    {
        int iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }

        if(iCnt == Arr.length)
        {
            return -1;
        }
        else
        {
            return iCnt+1;
        }
    }
}

class Program34_2_FirstOccurence_index
{
    public static void main(String[] args)
    {
        int iSize = 0,iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        System.out.println("Enter the number to find : ");
        iValue = sobj.nextInt();

        ArrayClass ADobj = new ArrayClass(iSize);

        ADobj.Accept();
        iRet = ADobj.Check(iValue);

        if(iRet == -1)
        {
            System.out.println("Element not found");
        }
        else
        {
            System.out.println("index of first Occurence is : "+iRet);
        }
    }
}

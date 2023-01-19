
/*

5. Write Java program which accept N numbers from user and display
all such elements which are multiples of 11.

Input : N : 6

Elements :85 66 3 55 93 88

Output : 66 55 88

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

class ArrayDemo extends ArrayX
{
    public ArrayDemo(int iLength)
    {
        super(iLength);
    }

    public void MultipleOf11()
    {
        int iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( ((Arr[iCnt] % 11) == 0))
            {
                System.out.print(Arr[iCnt] + " ");   
            }
            
        }
    }
}

class Program32_5_MultipleOF11
{
    public static void main(String[] args)
    {
        int iSize = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        ArrayDemo ADobj = new ArrayDemo(iSize);

        ADobj.Accept();
        ADobj.MultipleOf11();

    }
}

/*

3. Write Java program which accept N numbers from user and display
all such elements which are even and divisible by 5.

Input : N : 6

Elements :85 66 3 80 93 88

Output : 80

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

    public void DivisibleBy5_Even()
    {
        int iCnt = 0;

        System.out.println();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if( ((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 2) == 0))
            {
                System.out.print(Arr[iCnt] + " ");   
            }
            
        }
    }
}

class Program32_3_DivisibleBy5_Even
{
    public static void main(String[] args)
    {
        int iSize = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        ArrayDemo ADobj = new ArrayDemo(iSize);

        ADobj.Accept();
        ADobj.DivisibleBy5_Even();

    }
}
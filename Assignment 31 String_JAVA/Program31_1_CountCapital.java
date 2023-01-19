
/*

1.Write a Java program which accept string from user and count
number of capital characters.

Input : “Marvellous Multi OS”
Output : 4

*/

import java.util.*;

class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        str = sobj.nextLine();
    }

    public void Display()
    {
        System.out.println(str);
    }
}

class StringCount extends StringX
{
    public int CountCapital()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0,iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Program31_1_CountCapital
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        StringCount SCobj = new StringCount();

        SCobj.Accept();
        iRet = SCobj.CountCapital();

        System.out.println("Count of capital letters is : "+iRet);

    }
}

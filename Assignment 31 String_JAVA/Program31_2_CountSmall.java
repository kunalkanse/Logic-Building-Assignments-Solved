
/*

2. Write a java program which accept string from user and count
number of small characters.

Input : Marvellous
Output : 9

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
    public int CountSmall()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0,iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class Program31_2_CountSmall
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        StringCount SCobj = new StringCount();

        SCobj.Accept();
        iRet = SCobj.CountSmall();

        System.out.println("Count of small letters is : "+iRet);

    }
}

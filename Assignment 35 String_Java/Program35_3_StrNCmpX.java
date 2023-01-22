
/*

3. Write a program which 2 strings from user and check whether
first N contents of two strings are equal or not.

Input : Marvellous Infosystems
        Marvellous Logic Building
        10
        
        Output : TRUE

*/

import java.util.*;

class StringDemo
{
    public String src;
    public String dest;
    public int iNo = 0;

    public StringDemo(String source, String destination, int iNum)
    {
        src = source;
        dest = destination;
        iNo = iNum;
    }

    public boolean StrCmpX()
    {
        int iCnt = 0;
        boolean flag = true;
        
        char SrcArr[] = src.toCharArray();
        char DestArr[] = dest.toCharArray();


        while(iCnt < iNo)
        {
            if(SrcArr[iCnt] != DestArr[iCnt])
            {
                flag = false;
            }

            iCnt++;
        }

        return flag;
    }


}

public class Program35_3_StrNCmpX
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String source = sobj.nextLine();

        System.out.println("Enter second string : ");
        String dest = sobj.nextLine();

        System.out.println("Enter the number til check :");
        int iValue = sobj.nextInt();

        StringDemo SDobj = new StringDemo(source,dest,iValue);

        boolean bRet = SDobj.StrCmpX();

        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("String are not equal");
        }

    }    
}


/*

2. Write a program which 2 strings from user and check whether
contents of two strings are equal or not.

Input : Marvellous Infosystems
        Marvellous Infosystems
        
        Output : TRUE

*/

import java.util.*;

class StringDemo
{
    public String src;
    public String dest;

    public StringDemo(String source, String destination)
    {
        src = source;
        dest = destination;
    }

    public boolean StrCmpX()
    {
        int iCnt = 0;
        boolean flag = true;
        
        char SrcArr[] = src.toCharArray();
        char DestArr[] = dest.toCharArray();

        if(SrcArr.length != DestArr.length)
        {
            return false;
        }

        while(iCnt < SrcArr.length)
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

public class Program35_2_StrCmpX
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String source = sobj.nextLine();

        System.out.println("Enter second string : ");
        String dest = sobj.nextLine();

        StringDemo SDobj = new StringDemo(source,dest);

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

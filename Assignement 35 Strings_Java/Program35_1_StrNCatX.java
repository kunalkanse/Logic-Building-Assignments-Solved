
/*

1. Write a java program which accepts 2 strings from user and
concat N characters of second string after first string.Value of N
should be accepted from user.

Note : If third parameter is greater than the size of second string
then concat whole string after first string.

Input : Marvellous Infosystems
        Logic Building
        5

Output : Marvellous Infosystems Logic

*/

import java.util.*;

class StringDemo
{
    public String src;
    public String dest;
    public int iCnt = 0;

    public StringDemo(String source, String destination, int iCount)
    {
        src = source;
        dest = destination;
        iCnt = iCount;
    }

    public String StrNCatX()
    {
        int i = 0, j = 0;
        char SrcArr[] = new char[50];
        SrcArr = src.toCharArray();
        char DestArr[] = dest.toCharArray();

        while(SrcArr[i] != '\0')
        {
            i++;
        }

        System.out.println(i);

        while(j < iCnt)
        {
            SrcArr[i] = DestArr[j];
            i++;
            j++;
        }

        return new String(SrcArr);
    }


}

public class Program35_1_StrNCatX
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String source = sobj.nextLine();

        System.out.println("Enter string To concat : ");
        String dest = sobj.nextLine();

        System.out.println("Enter how many character to concat");
        int iCount = sobj.nextInt();

        StringDemo SDobj = new StringDemo(source,dest,iCount);

        String Concated = SDobj.StrNCatX();

        System.out.println(Concated);

    }    
}

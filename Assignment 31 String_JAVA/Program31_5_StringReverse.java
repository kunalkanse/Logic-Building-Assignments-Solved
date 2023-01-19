
/*

5. Write a java program which accept string from user and display
it in reverse order.

Input : MarvellouS
Output : SuollevraM

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

class StringReverseX extends StringX
{
    public String StrRev()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        char temp = '\0';
        int iStart = 0,iEnd = (Arr.length-1);

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
            iCnt++;
        }


        return new String(Arr);
        // return String.valueOf(Arr);
    }
}

class Program31_5_StringReverse
{
    public static void main(String[] args) 
    {
        String sRet;
        StringReverseX SRobj = new StringReverseX();

        SRobj.Accept();
        sRet = SRobj.StrRev();

        System.out.println("reversed String is : "+sRet);

    }
}
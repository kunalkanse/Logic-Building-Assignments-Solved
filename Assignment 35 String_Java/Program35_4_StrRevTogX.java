

/*

4. Accept sing from user and reverse the contents of that string
by toggling the case.

Input :  aCBdef
Output : FEDcbA

*/

import java.util.*;

class StringDemo
{
    public String src;

    public StringDemo(String str)
    {
        src = str;
    }

    public String StrRevTogX()
    {
        int i = 0,j = (src.length()-1);
        char temp = '\0';
        
        char SrcArr[] = src.toCharArray();

        while(i < j)
        {
            temp = SrcArr[i];

            if((SrcArr[j] >= 'A') && (SrcArr[j] <= 'Z'))
            {
                SrcArr[i] = SrcArr[j] + 'a' - 'A';
            }
            else if((SrcArr[j] >= 'a') && (SrcArr[j] <= 'z'))
            {
                SrcArr[i] = SrcArr[j] + 'A' - 'a';
            }
            
            if((temp >= 'A') && (temp <= 'Z'))
            {
                SrcArr[j] = temp + 'A' - 'a';
            }
            else if((temp >= 'a') && (temp <= 'z'))
            {
                SrcArr[j] = temp + 'a' - 'A';
            }
            
            i++;
            j--;
        }

        return new String(SrcArr);
    }


}

class Program35_3_StrNCmpX
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

        StringDemo SDobj = new StringDemo(source);

        String sRet = SDobj.StrRevTogX();

    }    
}

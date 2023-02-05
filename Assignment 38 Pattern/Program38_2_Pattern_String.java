
import java.util.*;

/*

2. Write Java program which accept String from user and display
below pattern.

Input : Hello

Output : 

    H e l l o
    H e l l
    H e l
    H e
    H

*/

class Pattern
{
    private String str;

    public Pattern(String strTemp)
    {
        str = strTemp;
    }

    public void DisplayPattern()
    {
        char StrArr[] = str.toCharArray();

        int iCnt = 0, jCnt = 0, index = 0;

        for(iCnt = 1; iCnt <= StrArr.length ; iCnt++)
        {
            for(jCnt = (StrArr.length) , index = 0; jCnt >= 0; jCnt-- , index++)
            {   
                if(jCnt >= iCnt)
                {
                    System.out.print(StrArr[index] + " ");
                }
            }
            System.out.println();
        }
    }
}

class Program38_2_Pattern_String 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        String str;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        Pattern pobj = new Pattern(str);

        pobj.DisplayPattern();
    }    
}



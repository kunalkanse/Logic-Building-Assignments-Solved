
import java.util.*;

/*

1. Write Java program which accept String from user and display
below pattern.

Input : Hello

Output : 

    H e l l o
    H e l l o
    H e l l o
    H e l l o
*/


class Pattern
{
    private String str;
    private int iRows = 0;

    public Pattern(String strTemp , int Rows)
    {
        str = strTemp;
        iRows = Rows;
    }

    public void DisplayPattern()
    {
        char StrArr[] = str.toCharArray();

        int iCnt = 0, jCnt = 0;

        for(iCnt = 1; iCnt <= iRows ; iCnt++)
        {
            for(jCnt = 0; jCnt <= StrArr.length-1; jCnt++)
            {
                System.out.print(StrArr[jCnt] + " ");
            }
            System.out.println();
        }
    }
}

public class Program38_1_Pattern_Character 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        String str;
        int Rows = 0;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        System.out.println("Enter the rows : ");
        Rows = sobj.nextInt();

        Pattern pobj = new Pattern(str,Rows);

        pobj.DisplayPattern();
    }    
}


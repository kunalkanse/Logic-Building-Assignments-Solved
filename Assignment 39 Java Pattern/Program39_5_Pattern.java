import java.util.*;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane.CloseAction;

/*

5. Write Java program which accept String from user and display
below pattern.

Input : Hello

Output : 

    H # # # #
    H e # # #
    H e l # #
    H e l l #
    H e l l o
    H e l l #
    H e l # #
    H e l # #
    H e # # #
    H # # # #

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

        for(iCnt = 1; iCnt <= StrArr.length-1 ; iCnt++)
        {
            for(jCnt =  1, index = 0; jCnt <= (StrArr.length); jCnt++ , index++)
            {   
                if(iCnt >= jCnt)
                {
                    System.out.print(StrArr[index] + "  ");
                }
                else
                {
                    System.out.print("#  ");;
                }
            }
            System.out.println();
        }

        for(iCnt = 1; iCnt <= StrArr.length ; iCnt++)
        {
            for(jCnt =  StrArr.length, index = 0; jCnt >= 1; jCnt-- , index++)
            {   
                if(iCnt <= jCnt)
                {
                    System.out.print(StrArr[index] + "  ");
                }
                else
                {
                    System.out.print("#  ");;
                }
            }
            System.out.println();
        }

    }
}

class Program39_5_Pattern 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        String str;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        Pattern pobj = new Pattern(str);

        pobj.DisplayPattern();

        close(sobj);
    }    
}



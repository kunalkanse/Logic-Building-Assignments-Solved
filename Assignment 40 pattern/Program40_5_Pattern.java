
import java.util.*;

import javax.imageio.event.IIOReadProgressListener;

/*

5. Write a java program which accept number of rows and number of
columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : 

1   2   3   4   5
1   2           5
1       3       5
1           4   5
1   2   3   4   5

*/

class Pattern
{
    public int iRows = 0;
    public int iCols = 0;

    public Pattern(int rows , int cols)
    {
        iRows = rows;
        iCols = cols;
    }

    public void DisplayPattern()
    {
        int iCnt = 0, jCnt = 0;

        for(iCnt = 1; iCnt <= iRows ; iCnt++)
        {
            for(jCnt =  1; jCnt <= iCols; jCnt++)
            {   
                if((iCnt==jCnt) || (jCnt==1) || (jCnt==iCols) || (iCnt==1) || (iCnt==iRows))
                {
                    System.out.print(jCnt + "  ");
                }
                else
                {
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
    }
}

class Program40_5_Pattern 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows : ");
        int Rows = sobj.nextInt();

        System.out.println("Enter the colomns : ");
        int Cols = sobj.nextInt();

        Pattern pobj = new Pattern(Rows,Cols);

        pobj.DisplayPattern();
        
    }    
}





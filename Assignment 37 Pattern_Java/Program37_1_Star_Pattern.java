
import java.util.Scanner;

/*

1. Write Java program which accept number of rows and number of
columns from user and display below pattern.

Input : iRow = 4 iCol = 3

Output :
 
    * * *
    * * *
    * * *
    * * *

*/

class Pattern
{
    public int iRows = 0;
    public int iCols = 0;

    public Pattern(int row, int col)
    {
        iRows = row;
        iCols = col;
    }

    public void Display()
    {
        int iCnt = 0, jCnt = 0;

        for(iCnt = 1; iCnt <= iRows; iCnt++)
        {
            for(jCnt = 1; jCnt <= iCols ; jCnt++)
            {
                System.out.print("* ");
            }

            System.out.println();
        }

    }
}

class Program37_1_Star_Pattern 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int Rows = 0,cols = 0;

        System.out.print("Enter the rows : ");
        Rows = sobj.nextInt();

        System.out.println("Enter the columns : ");
        cols = sobj.nextInt();

        Pattern pobj = new Pattern(Rows,cols);
        pobj.Display();
    }    
}

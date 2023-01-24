
import java.util.Scanner;

/*

3. Write Java program which accept number of rows and number of columns
from user and display below pattern.

Input : iRow = 3 iCol = 5

Output : 

    A A A A A
    B B B B B
    C C C C C
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
        char Ch = '\0';

        for(iCnt = 1 , Ch = 'A'; iCnt <= iRows; iCnt++, Ch++)
        {
            for(jCnt = 1 ; jCnt <= iCols ; jCnt++)
            {
                System.out.print(Ch + " ");
            }

            System.out.println();
        }

    }
}

class Program36_3_Pattern_Alphabet 
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

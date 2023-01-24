
import java.util.Scanner;

/*
2. Write Java program which accept number of rows and number of columns
from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : 
    A B C D
    a b c d
    A B C D
    a b c d
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
        char ChCap = '\0', ChSmall = '\0';

        for(iCnt = 1; iCnt <= iRows; iCnt++)
        {
            for(jCnt = 1 , ChCap = 'A' , ChSmall = 'a'; jCnt <= iCols ; jCnt++ , ChSmall++ , ChCap++)
            {
                if((iCnt % 2) != 0)
                {
                    System.out.print(ChCap + " ");
                }
                else
                {
                    System.out.print(ChSmall + " ");
                }
            }

            System.out.println();
        }

    }
}

class Program36_2_Pattern_Alphabet 
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

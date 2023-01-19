

/*

3. Write a java program which accept string from user and return
difference between frequency of small characters and frequency
of capital characters.

Input : MarvellouS
Output : 6 (8-2)

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

class StringCountDiff extends StringX
{
    public int FreqDiff()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0,iSmall = 0,iEven = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iSmall++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iEven++;
            }
        }

        return iSmall-iEven;
    }
}

class Program31_3_Diff_Cap_Small
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        StringCountDiff SCobj = new StringCountDiff();

        SCobj.Accept();
        iRet = SCobj.FreqDiff();

        System.out.println("Frequancy is : "+iRet);

    }
}
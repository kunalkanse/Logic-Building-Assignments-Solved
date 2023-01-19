
/*

4. Write a java program which accept string from user and check
whether it contains vowels in it or not.

Input : marvellous

Output : TRUE

Input : Demo

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

class StringCheckVowels extends StringX
{
    public boolean CheckVowels()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        boolean flag = false;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'Z'))
            {
                flag = true;
                break;
            }
            
        }

        return flag;
    }
}

class Program31_4_CheckVowels
{
    public static void main(String[] args) 
    {
        boolean bRet = false;
        StringCheckVowels SCobj = new StringCheckVowels();

        SCobj.Accept();
        bRet = SCobj.CheckVowels();

        if(bRet == true)
        {
            System.out.println("String Contains vowel");
        }
        else
        {
            System.out.println("String not contains vowel");
        }

    }
}
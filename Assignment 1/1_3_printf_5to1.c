
//3. Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    for (int i = 5; i > 0 ; i--)
    {
        printf("%d\t",i);
    }
    
}

int main()
{
    Display();
    
    return 0;
}
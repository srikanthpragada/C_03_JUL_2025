// Program to create a function to draw a line
// Date : 18-JUL-2025

#include <stdio.h>
#include <conio.h>

// User-defined function
void line(int len, char ch)
{
  int i;

      for(i = 1; i <= len; i ++)
            putch(ch);
}

void main()
{

        line(25, '*'); // call to function

        printf("\nSrikanth Technologies\n");

        line(30, '-');


}

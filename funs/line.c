// Program to print title with lines
// Date : 18-JUL-2025

#include <stdio.h>
#include <conio.h>

// User-defined function
void line()
{
  int i;

      for(i = 1; i <= 25; i ++)
            putch('*');
}

void main()
{

        line(); // call to function

        printf("\nSrikanth Technologies\n");

        line();


}

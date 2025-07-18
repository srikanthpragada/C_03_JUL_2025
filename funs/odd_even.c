// Program to print title with lines
// Date : 18-JUL-2025

#include <stdio.h>
#include <conio.h>

// User-defined function
void print_type(int num)
{
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}


void main()
{

      print_type(10);
      print_type(25);

}

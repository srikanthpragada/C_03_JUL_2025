// Program to create a function to print numbers from 1 to param
// Date : 18-JUL-2025

#include <stdio.h>
#include <conio.h>


void print_numbers(int num)
{
  int i;

    for(i = 1; i <= num ; i ++)
         printf("%d ", i);
}


void main()
{

      print_numbers(10);

}

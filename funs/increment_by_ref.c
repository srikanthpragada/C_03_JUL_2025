// Function to increment value - pass by reference or address
// Date : 21-JUL-2025

#include <stdio.h>

void increment(int * p)
{
    *p = *p + 1;
}


void main()
{
  int a = 100;

    increment(&a);
    printf("%d ", a);
}



// Function to increment value - pass by value
// Date : 19-JUL-2025

#include <stdio.h>

void increment(int v)
{
    v++;
}


void main()
{
  int a = 100;

    increment(a);
    printf("%d ", a);
}



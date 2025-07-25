// Recursion Demo
// Date : 25-JUL-2025

#include <stdio.h>
#include <stdlib.h>


void reverse(int num)
{
   printf("%d ", num);
   if (num > 1)
       reverse(num - 1);  // recursion
}

void main()
{
     reverse(5);
}



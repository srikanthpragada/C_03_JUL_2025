// Program to take a number and print total of even numbers and odd numbers from 1 to that number
// Date : 12-JUL-2025

#include <stdio.h>

void main()
{
  int n, i, even_total = 0, odd_total = 0;

      printf("Enter a number :");
      scanf("%d", &n);

      for(i = 1; i <= n;  i ++ )
      {
         if(i % 2 == 0)
             even_total += i;
         else
             odd_total += i;
      }

      printf("Even Total = %d, Odd Total = %d", even_total, odd_total);
}

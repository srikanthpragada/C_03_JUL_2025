// Program to take a number and print total for 1 to that number
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
  int n, i, total = 0;

      printf("Enter a number :");
      scanf("%d", &n);


      for(i = 1; i <= n;  i ++ )
      {
          total += i;
      }

      printf("Total = %d", total);

}

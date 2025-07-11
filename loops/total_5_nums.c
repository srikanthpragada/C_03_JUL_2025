// Program to take 5 numbers and print total
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
  int n, i, total = 0;


      for(i = 1; i <= 5;  i ++)
      {
          printf("Enter a number :");
          scanf("%d", &n);

          total += n;
      }

      printf("Total = %d", total);

}

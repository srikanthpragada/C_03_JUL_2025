// Program to print odd numbers between 1 to 50
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
  int n, i;

      printf("Enter a number :");
      scanf("%d", &n);


      for(i = 2; i <= n;  i += 2 )
      {
          printf("%d ", i);
      }

}

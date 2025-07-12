// Program to take a number and count factors
// Date : 12-JUL-2025

#include <stdio.h>

void main()
{
  int n, i, count = 0;

      printf("Enter a number :");
      scanf("%d", &n);

      for(i = 2; i <= n / 2;  i ++ )
      {
         if(n % i == 0)
             count ++;
      }

      if(count > 0)
          printf("Count = %d", count);
      else
          printf("Prime Number!");

}

// Program to take a number and print whether it is prime
// Date : 14-JUL-2025

#include <stdio.h>

void main()
{
  int n, i;

      printf("Enter a number :");
      scanf("%d", &n);

      for(i = 2; i <= n / 2;  i ++ )
      {
         if(n % i == 0)
         {
             printf("Not a prime number!");
             break;
         }
      }

      if( i > n/2)
        printf("Prime number!");


}

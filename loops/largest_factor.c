// Program to take a number and display largest factor
// Date : 12-JUL-2025

#include <stdio.h>

void main()
{
  int n, i, count = 0;

      printf("Enter a number :");
      scanf("%d", &n);

      for(i = n/2; i >= 1 ;i -- )
      {
         if(n % i == 0)
         {
             printf("Largest factor = %d", i);
             break; // terminates loop
         }
      }


}

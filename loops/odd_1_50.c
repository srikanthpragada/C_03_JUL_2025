// Program to print odd numbers between 1 to 50
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
  int n;

      /*
      for(n = 1; n <= 50; n++ )
      {
         if(n % 2 == 1)
             printf("%d ", n);
      }
      */


      for(n = 1; n <= 50; n += 2 )
      {
          printf("%d ", n);
      }

}

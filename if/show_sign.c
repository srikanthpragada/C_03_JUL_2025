// Program to take marks and display its sign
// Date : 08-JUL-2025

#include <stdio.h>

void main()
{
   int num;

      printf("Enter number:");
      scanf("%d", &num);

      if(num >= 0)
          printf("Positive");
      else
          printf("Negative");
}

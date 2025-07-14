// Program to take 2 numbers and print common factors
// Date : 14-JUL-2025

#include <stdio.h>

void main()
{
  int n1, n2, smallest, i;

      printf("Enter 2 numbers :");
      scanf("%d%d", &n1, &n2);

      smallest = n1 < n2 ? n1 : n2;

      for(i = 2; i <= smallest / 2;  i ++ )
      {
         if(n1 % i == 0 && n2 % i == 0)
               printf("%d ", i);
      }

}

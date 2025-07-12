// Program to take 2 numbers and display even numbers between them
// Date : 12-JUL-2025

#include <stdio.h>

void main()
{
  int f,s;

       printf("ENter two numbers :");
       scanf("%d%d",&f,&s);

       f = f % 2 == 0 ? f : f + 1;

       while(f <= s)
       {
          printf("%d ", f);
          f += 2;
      }
}

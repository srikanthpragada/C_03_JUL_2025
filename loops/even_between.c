// Program to take 2 numbers and display even numbers between them
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
  int f,s;

       printf("ENter two numbers :");
       scanf("%d%d",&f,&s);

       while(f <= s)
       {
          if(f % 2 == 0)
          {
             printf("%d ", f);
          }

          f++;
      }
}

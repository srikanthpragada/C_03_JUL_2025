// Program to print 1 in diagonal and anti-diagonal
// Date : 15-JUL-2025

#include <stdio.h>

void main()
{
  int i,j;


      for(i = 1; i <= 5; i ++)
      {
          for(j = 1; j <= 5; j ++)
          {
              if (i == j || i + j == 6)
                  printf(" 1 ");
              else
                  printf(" 0 ");

          }

          printf("\n");
      }





}

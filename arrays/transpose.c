// Program to create 5 X 5 array and fill it with random numbers
// and display original and transposed array
// Date : 18-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[5][5];
  int r,c;

    srand(time(0));

    for(r = 0; r < 5; r ++)
    {
        for(c = 0; c < 5; c ++)
        {
             a[r][c] = (rand() % 25) + 1;
             printf("%5d", a[r][c]);
        }

        printf("\n");
    }

    printf("\nTransposed\n\n");

    for(r = 0; r < 5; r ++)
    {
        for(c = 0; c < 5; c ++)
        {
             printf("%5d", a[c][r]);
        }

        printf("\n");
    }

}

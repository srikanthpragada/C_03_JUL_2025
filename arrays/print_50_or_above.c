// Program to create an array, fill it with random numbers and print that are >= 50
// Date : 15-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[20];
  int i;

    srand(time(0));  // Initialize seed

    for(i = 0; i < 20; i ++)
    {
        a[i] = rand() % 100;
    }

    for(i = 0; i < 20; i ++)
    {
       if(a[i] >= 50)
          printf("%d ", a[i]);
    }

}

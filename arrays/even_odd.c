// Program to create an array, take values and print even numbers first and then odd numbers
// Date : 16-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[10];
  int i;

    srand(time(0));

    for(i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    printf("\nEven Numbers :");

    for(i = 0; i < 10; i ++)
    {
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
    }

    printf("\nOdd Numbers :");

    for(i = 0; i < 10; i ++)
    {
        if(a[i] % 2 != 0)
            printf("%d ", a[i]);
    }

}

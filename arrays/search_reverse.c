// Program to search and array in reverse direction
// Date : 17-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int a[10];
  int i, sn;

    srand(time(0));

    for(i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }

    printf("\nEnter search number :");
    scanf("%d", &sn);

    for(i = 9; i >= 0; i --)
    {
        if (a[i] == sn)
        {
            printf("Found at %d",i);
            break;
        }
    }

    if(i < 0)
        printf("Number not found!");

}

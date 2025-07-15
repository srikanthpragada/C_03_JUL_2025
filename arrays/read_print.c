// Program to create an array, take values and print them
// Date : 15-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  int a[5];
  int i;

    printf("\nEnter 5 number :");

    for(i = 0; i < 5; i ++)
    {
       scanf("%d", &a[i]);
    }

    printf("\n Array \n");

    for(i = 4; i >= 0; i --)
    {
       printf("%d ", a[i]);
    }
}

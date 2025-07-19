// Program to create a function to take an array and return total
// Date : 19-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <string.h>


int total(int a[10])
{
  int i, sum = 0;

     for(i = 0; i < 10; i ++)
        sum += a[i];

     return sum;
}

void main()
{
  int arr[] = {1,2,4,5,6,8,9,2,3,4};
  int sum;

     sum = total(arr);
     printf("%d ", sum);
}

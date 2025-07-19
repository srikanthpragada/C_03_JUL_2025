// Program to create a function to take an array and and a value and returns
// the position where value is found.  -1 on error.
// Date : 19-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <string.h>

// Returns postion of the given number in the array
// Returns -1 if number not found

int search(int a[10], int sn)
{
  int i;

     for(i = 0; i < 10; i ++)
     {
       if (a[i] == sn)
           return i; // found, return position
     }

     return -1; // couldn't find

}

void main()
{
  int arr[] = {1,2,4,5,6,8,9,2,3,4};
  int pos;

     pos = search(arr, 7);
     printf("%d ", pos);


     pos = search(arr, 3);
     printf("%d ", pos);
}

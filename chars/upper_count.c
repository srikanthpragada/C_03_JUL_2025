// Program to take 10 chars and display how many are uppercase
// Date : 15-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch;
  int i, count = 0;


    for(i = 1; i <= 10; i ++)
    {
       printf("\nEnter a char :");
       ch = getche();

       if (isupper(ch))
          count ++;
    }

    printf("\nUppercase count = %d", count);
}

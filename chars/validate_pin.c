// Program to take 4 chars and display whether input is a valid pin
// Date : 15-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch;
  int i, count = 0;

    printf("\nEnter Pin :");

    for(i = 1; i <= 4; i ++)
    {
       ch = getch();
       putch('*');

       if(isdigit(ch))
           count++;
    }

    if(count == 4)
         printf("\nValid PIN");
    else
         printf("\nInvalid PIN");
}

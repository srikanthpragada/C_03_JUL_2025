// Program to take 10 chars and display them in uppercase
// Date : 15-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
  char ch;
  int i;

    printf("\nEnter 10 chars :");

    for(i = 1; i <= 10; i ++)
    {
       ch = getch();
       putch(toupper(ch));
    }

}

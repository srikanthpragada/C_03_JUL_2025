// Program to create a function to draw a line
// Date : 18-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <string.h>


void print_reverse(char s[20])
{
  int i;

      for(i = strlen(s) - 1; i >= 0; i --)
           putch(s[i]);
}

void main()
{
     print_reverse("Hello");
}

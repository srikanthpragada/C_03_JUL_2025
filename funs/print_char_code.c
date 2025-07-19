// Program to create a function to print chars and codes of the given string
// Date : 19-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <string.h>


void print_char_code(char s[20])
{
  int i;

      for(i = 0; s[i] != '\0'; i ++)
          printf("%c %d\n",s[i],s[i]);
}

void main()
{
     print_char_code("Programming");
}

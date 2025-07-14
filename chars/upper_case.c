// Program to take a char and display whether it is uppercase
// Date : 14-JUL-2025

#include <stdio.h>
#include <conio.h>

void main()
{
  char ch;


       printf("Enter a char :");
       ch = getchar();

       if (ch >= 65 && ch <= 90)
          printf("Uppercase!");
       else
          printf("Not an uppercase!");


}

// Program to take a string and count spaces
// Date : 17-JUL-2025

#include <stdio.h>

void main()
{
  char st[50];
  int i, count;


    printf("Enter string :");
    gets(st);

    for(i = 0; st[i] != '\0'; i ++)
    {
       if (st[i] == ' ')
           count ++;
    }

    printf("Spaces count : %d", count);

}

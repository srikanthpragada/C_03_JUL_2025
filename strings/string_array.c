// Program to take 5 strings and display them in reverse order
// Date : 18-JUL-2025

#include <stdio.h>
#include <string.h>

void main()
{
  char st[5][50]; // An array of 5 strings, each 50 chars
  int i;

    for(i = 0; i < 5; i ++)
    {
       printf("Enter string :");
       gets(st[i]);
    }


    for(i = 0; i < 5; i ++)
    {
       puts(strrev(st[i]));
    }


}

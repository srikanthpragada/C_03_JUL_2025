// Program to take 5 strings and display the largest
// Date : 18-JUL-2025

#include <stdio.h>
#include <string.h>

void main()
{
  char st[50], largest[50];
  int i;


    strcpy(largest, "");  // Empty string

    for(i = 1; i <= 5; i ++)
    {
       printf("Enter string :");
       gets(st);

       if (strcmp(st, largest) > 0)
           strcpy(largest,st);

    }

    printf("Largest = %s", largest);


}

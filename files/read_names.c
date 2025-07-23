// Open a file and read its contents
// Date : 23-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  FILE * fp;
  int ch;

    //1. Open file
    fp = fopen("names.txt", "rt");

    while(1)
    {
       ch = fgetc(fp); // read a char

       if(ch == EOF) // End-of-file
         break;

       putch(ch);
    }

    //3. Close file
    fclose(fp);
}



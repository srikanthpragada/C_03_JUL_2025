// Open a file and count chars
// Date : 23-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
  FILE * fp;
  char filename[30];
  int ch, count = 0;


    printf("Enter filename :");
    gets(filename);

    //1. Open file
    fp = fopen(filename, "rt");

    if(fp == NULL)
    {
        printf("Sorry! File %s not found", filename);
        exit(1);
    }

    while(1)
    {
       ch = fgetc(fp); // read a char

       if(ch == EOF) // End-of-file
         break;

       count ++;
    }

    //3. Close file
    fclose(fp);
    printf("Count = %d", count);
}



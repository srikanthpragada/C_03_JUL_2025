// Open a file and print it with line numbers
// Date : 23-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
  FILE * fp;
  char filename[30], line[100];
  int lineno = 1;
  char * p;


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
        p = fgets(line, 100, fp);
        if(p == NULL)  // EOF
            break;

        printf("%3d: %s", lineno, line);
        lineno ++;
    }

    //3. Close file
    fclose(fp);
}



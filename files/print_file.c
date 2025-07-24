// Open a file and print it with line numbers
// Date : 24-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[100];
  int lineno = 1;
  char * p;

    if(argc < 2)
    {
        printf("Filename is missing!");
        exit(1);
    }


    //1. Open file
    fp = fopen(argv[1], "rt");

    if(fp == NULL)
    {
        printf("Sorry! File %s not found",argv[1]);
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



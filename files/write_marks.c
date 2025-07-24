// Create marks.dat and write 50 marks into it
// Date : 24-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int i, marks;


    //1. Open file
    fp = fopen("marks.dat", "wb");

    if(fp == NULL)
    {
        printf("Sorry! File marks.dat could not be created!");
        exit(1);
    }


    srand(time(0));
    for(i = 1; i <= 50; i ++)
    {
        marks = rand() % 100;
        fwrite(&marks, sizeof(marks), 1, fp);

    }

    //3. Close file
    fclose(fp);

}



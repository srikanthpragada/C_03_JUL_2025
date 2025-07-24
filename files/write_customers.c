// Create customers.dat and write 5 customers info into it
// Date : 24-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

struct customer
{
    char name[30];
    int age;
    char gender;

};

void main()
{
  FILE * fp;
  int i;
  struct customer c;


    //1. Open file
    fp = fopen("customers.dat", "wb");

    if(fp == NULL)
    {
        printf("Sorry! File customers.dat could not be created!");
        exit(1);
    }


    for(i = 1; i <= 5; i ++)
    {

        printf("\nEnter customer name       :");
        gets(c.name);
        printf("Enter customer age        :");
        scanf("%d",&c.age);
        // clear buffer
        getchar();

        printf("Enter customer gender[m/f]:");
        c.gender = getchar();

        // clear buffer
        getchar();

        fwrite(&c, sizeof(struct customer), 1, fp);
    }

    //3. Close file
    fclose(fp);

}



// Read customers.dat and display its contents
// Date : 24-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
  int count;
  struct customer c;


    //1. Open file
    fp = fopen("customers.dat", "rb");

    if(fp == NULL)
    {
        printf("Sorry! File customers.dat could not be created!");
        exit(1);
    }


    while(1)
    {
        count = fread(&c, sizeof(struct customer), 1, fp);
        if(count == 0) // EOF
            break;

        printf("%-30s %2d %c\n", c.name, c.age, toupper(c.gender));
    }

    //3. Close file
    fclose(fp);

}



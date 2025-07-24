// Open a file and count chars, words and lines
// Date : 24-JUL-2025

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void main()
{
  FILE * sfp, *tfp;
  char sfilename[30], tfilename[30];
  int ch;


    printf("Enter Source filename :");
    gets(sfilename);


    printf("Enter Target filename :");
    gets(tfilename);

    //1. Open file
    sfp = fopen(sfilename, "rt");

    if(sfp == NULL)
    {
        printf("Sorry! File %s not found", sfilename);
        exit(1);
    }


    tfp = fopen(tfilename, "wt");

    if(tfp == NULL)
    {
        printf("Sorry! File %s not found", tfilename);
        exit(2);
    }


    while(1)
    {
       ch = fgetc(sfp); // read a char

       if(ch == EOF) // End-of-file
         break;

       if(!isspace(ch))
          fputc(ch, tfp);
    }

    //3. Close file
    fclose(sfp);
    fclose(tfp);

}



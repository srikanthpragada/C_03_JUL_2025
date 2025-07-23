// Create a file and write names into it
// Date : 23-JUL-2025

#include <stdio.h>
#include <string.h>

void main()
{
  FILE * fp;
  char name[20];

    //1. Open file
    fp = fopen("names.txt", "wt");

    while(1)
    {
        printf("Enter name [end to stop] :");
        gets(name);

        if(stricmp(name, "end") == 0)
             break;

        fprintf(fp,"%s\n", name);
    }

    //3. Close file
    fclose(fp);
}



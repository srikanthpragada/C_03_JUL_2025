// Create a file and write alphabets into it
// Date : 23-JUL-2025

#include <stdio.h>


void main()
{
  FILE * fp;
  char ch;

    //1. Open file
    fp = fopen("chars.txt", "wt");

    //2 . Write to file
    for(ch = 97; ch <= 122; ch ++)
        fputc(ch, fp);

    //3. Close file
    fclose(fp);
}



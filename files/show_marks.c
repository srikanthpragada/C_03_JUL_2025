// Read rollno and display marks
// Date : 24-JUL-2025

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

void main()
{
  FILE * fp;
  int count, pos, marks, rollno;

    //1. Open file
    fp = fopen("marks.dat", "rb");

    while(1)
    {
        printf("Enter rollno [0 to stop] :");
        scanf("%d",&rollno);

        if(rollno == 0)
            break;

        pos = (rollno - 1) * sizeof(int);

        fseek(fp, pos, SEEK_SET);  // move file pointer to required location

        count = fread(&marks, sizeof(int), 1, fp);
        if(count == 0)
            printf("Rollno is not valid!\n");
        else
            printf("Marks : %d\n",marks);
    }

    //3. Close file
    fclose(fp);

}



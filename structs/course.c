// Create a structure to store details of a course
// Date : 21-JUL-2025

#include <stdio.h>


// User-defined data type
struct course
{
    char title [20];
    int duration, fee;
};

void main()
{
  struct course c;
  struct course c2 = {"Python", 30, 10000};


    printf("Enter title :");
    gets(c.title);

    printf("Enter duration :");
    scanf("%d", &c.duration);

    printf("Enter fee :");
    scanf("%d", &c.fee);

    printf("Title    : %s\n", c.title);
    printf("Duration : %d\n", c.duration);
    printf("Fee      : %d\n", c.fee);
}



// Program to take a side of a square and print area
// Date : 05-JUL-2025

#include <stdio.h>

void main()
{
   int side, area;

      // Input
      printf("Enter side of a square :");
      scanf("%d", &side);

      // Process
      area = side * side;

      // Output
      printf("Area of square : %d", area);
}

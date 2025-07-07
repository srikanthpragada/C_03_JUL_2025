// Program to take radius of a circle and display area
// Date : 07-JUL-2025

#include <stdio.h>

void main()
{
   float radius, area;

      // Input
      printf("Enter radius of a circle :");
      scanf("%f", &radius);

      // Process
      area = 3.14 * radius * radius;

      // Output
      printf("Area of circle : %.2f", area);
}

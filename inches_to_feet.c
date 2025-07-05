// Program to take inches and print feet
// Date : 05-JUL-2025

#include <stdio.h>

void main()
{
   float inches, feet;

      // Input
      printf("Enter inches :");
      scanf("%f", &inches);

      // Process
      feet = inches / 12;

      // Output
      printf("Feet : %f", feet);
}

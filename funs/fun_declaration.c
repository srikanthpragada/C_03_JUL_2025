// Function declaration vs. function definition
// Date : 19-JUL-2025

#include <stdio.h>

// Function declaration or Prototype declaration
float average(float, float);

void main()
{
    printf("%f ", average(10,15));
}

// Function definition
float average(float a, float b)
{
    return  (a + b) / 2;
}

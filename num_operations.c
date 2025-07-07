// Program to take 2 numbers and perform arithmetic operations
// Date : 07-JUL-2025

#include <stdio.h>

void main()
{
   int n1, n2, sum;

      printf("Enter two numbers :");
      scanf("%d%d", &n1, &n2);

      sum = n1 + n2;

      printf("Sum        : %d\n", sum);
      printf("Difference : %d\n", n1 - n2);
      printf("Product    : %d\n", n1 * n2);
      printf("Modulus    : %d\n", n1 % n2);
}

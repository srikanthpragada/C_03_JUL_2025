// Program to take day of the week and no. of hours worked and calculate wage
// Date : 11-JUL-2025

#include <stdio.h>

void main()
{
   int day, hours, wage;

      printf("Enter day of the week [1-7]:");
      scanf("%d", &day);
      printf("Enter number of hours worked :");
      scanf("%d", &hours);

      switch(day)
      {
        case 1:
        case 2:
        case 3: wage = hours * 100; break;
        case 4: wage = hours * 120; break;
        case 5: wage = hours * 150; break;
        case 6: wage = hours * 175; break;
        default:
             wage = hours * 200;
      }

      printf("Wage = %d", wage);
}

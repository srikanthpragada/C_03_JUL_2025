// Program to take salary and calculate net salary
// Date : 08-JUL-2025

#include <stdio.h>

void main()
{
   int salary, hra, da, it, gross_salary, net_salary;

      printf("Enter salary:");
      scanf("%d", &salary);

      hra = salary * 20 /100;
      da = salary * 15 / 100;
      gross_salary = salary + hra + da;
      it = gross_salary * 12 / 100;
      net_salary = gross_salary - it;

      printf("Net Salary : %d",net_salary);
}

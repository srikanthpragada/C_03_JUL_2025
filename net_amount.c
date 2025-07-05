// Program to take qty and price and display net amount after a discount of 10%
// Date : 05-JUL-2025

#include <stdio.h>

void main()
{
   int qty, price, amount, discount, net_amount;

      // Input
      printf("Enter Qty :");
      scanf("%d", &qty);

      printf("Enter Price :");
      scanf("%d", &price);

      // Process
      amount =  qty * price;
      discount = amount * 10 / 100;
      net_amount = amount - discount;

      // Output
      printf("Amount      : %d\n", amount);
      printf("- Discount  : %d\n", discount);
      printf("Net Amount  : %d", net_amount);
}

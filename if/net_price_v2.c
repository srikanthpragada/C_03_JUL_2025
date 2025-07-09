// Program to take price and display net_price after a discount of 20% or 10%
// Date : 09-JUL-2025

#include <stdio.h>

void main()
{
   int price, tax, discount, after_discount, net_price;

      printf("Enter price:");
      scanf("%d", &price);

      if(price > 1000)
          discount = price * 20 / 100;
      else
          discount = price * 10 / 100;

      after_discount = price - discount;
      tax = after_discount * 8 / 100;
      net_price = after_discount + tax;

      printf("Price          : %5d\n",price);
      printf("- Discount     : %5d\n",discount);
      printf("After discount : %5d\n",after_discount);
      printf("+ Tax          : %5d\n",tax);
      printf("Net Price      : %5d\n",net_price);


}

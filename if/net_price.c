// Program to take price and display net_price after a discount of 20% or 10%
// Date : 09-JUL-2025

#include <stdio.h>

void main()
{
   int price;

      printf("Enter price:");
      scanf("%d", &price);

      if(price > 1000)
         printf("Net Price : %d", price * 80 / 100);  // 20% discount
      else
         printf("Net Price : %d", price * 90 / 100);  // 10% discount
}

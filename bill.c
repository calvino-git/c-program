#include <stdio.h>
#include "total.h"
float total = 0.0;
short count = 0;
/* 
* 6% charged for the item sold
*/
short tax_percent = 6;

int main()
{
  float val;
  printf("price of item: ");
  while (scanf("%f", &val) == 1){
    printf("Total so far: %.2f\n",add_with_tax(val));
    printf("Price of item: ");
  }
  printf("\nFinal total: %.2f\n",total);
  printf("Number of items: %hi\n", count);
  return 0;
}

float add_with_tax(float f)
{
  /* Total to sold including tax */
  
  float tax_rate = 1 + tax_percent/100.0;
  total = total + (f*tax_rate);
  count = count + 1;
  return total;
}


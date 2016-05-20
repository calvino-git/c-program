#include <stdio.h>

#define LOWER 0 /* lower limit of the table */
#define UPPER 300 /* upper limit of the temperature table */
#define STEP 20 /* step size between successive temperatures */

main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%d\t%.2f\n", fahr, (5.0/9.0)*(fahr - 32));
  }
}

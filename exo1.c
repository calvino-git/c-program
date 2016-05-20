#include <stdio.h>

int main()
{
  int x = 0;
  int y = 0;
  while (x < 5){
    y += x;
    printf("%i%i ", x, y);
    x++;
  }
  return 0;
}

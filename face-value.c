/*
 * Program to evaluate face values.
 * Released under East Legon Accra License 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char card_name[3];
  int count = 0;
  while(card_name[0] != 'x'){
  puts("Enter the card_name: ");
  scanf("%2s",card_name);
  int val = 0;
  /*if (card_name[0] == 'K') {
    val = 10;
  } else if (card_name[0] == 'Q'){
    val = 10;
  } else if (card_name[0] == 'J'){
    val = 10;
  } else if (card_name[0] == 'A'){
    val = 11;
  } else {
    val = atoi(card_name);
    printf("%d\n", val);
    }*/
  /* Check if the value is 3 to 6*/
    switch(card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'x':
      continue;
    default:
      val = atoi(card_name);
      if ((val <1) || (val >10)){
	puts("i don't understand that value");
	continue;
      }
    }
  if ((val >=3) && (val <= 6)){
    puts("Count has gone up");
    count++;
  }
  /* Otherwise check if the card was 10, J, Q, or K */
  else if (val == 10){
    puts("Count has gone down");
    count--;
  }
      printf("current count: %i\n",  count);
  }
  return 0;
}

#include <stdio.h>

#define IN 0 /* inside a word */
#define OUT 1 /* outside a word */

main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  c = getchar();
  printf("%d\t %d \n",'\377','\n');
  while (c != EOF){
    ++nc;
    /*if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT){
      state = IN;
      ++nw;
      }*/
    }
  printf("%d %d %d\n", nl, nw, nc);
}

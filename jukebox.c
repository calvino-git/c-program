#include <stdio.h>
#include <string.h>

char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
  puts(strstr(tracks[1], search_for));
  int i;
  for (i = 0; i < 5; i++ ){
    if (!strstr(tracks[i], search_for))
      printf("Track %i : '%s'\n", i, tracks[i]);
  }
}
void print_reverse(char *s)
{
  size_t len = strlen(s);
  char *t = s + len - 1;
  while(t >= s){
    printf("%c", *t);
    t = t - 1;
  }
  printf("");
}
int main()
{
  char search_for[80];
  char *juices[] = {
    "dragonfruit", "waterberry", "sharonfruit", "uglifruit", "rumberry", "kiwifruit", "mulberry", "strawberry", "blueberry", "blackberry", "starfruit"
  };
  char *a;
  puts(juices[6]);
  print_reverse(juices[7]);
  a = juices[2];
  juices[2] = juices[8];
  juices[8] = a;
  puts(juices[8]);
  print_reverse(juices[(18 + 7) / 5]);
  puts(juices[2]);
  print_reverse(juices[9]);
  juices[1] = juices[3];
  puts(juices[10]);
  print_reverse(juices[1]);
  return 0;
}

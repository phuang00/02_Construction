#include "headers.h"

struct item example(){
  char *items = "applecandychipsberrycakestotesstandtabledoorschair";
  int prices[] = {2, 5, 1, 3, 8, 9, 2, 9, 8, 3};
  srand(time(NULL) * time(NULL) / rand());
  int choice = rand() % 10;
  char s[6];
  int i;
  for (i = 0; i < 5; i++){
    *(s + i) = *(items + (5 * choice) + i);
  }
  *(s + 5) = '\0';
  struct item ans;
  strcpy(ans.i, s);
  ans.p = *(prices + choice);
  return ans;
}

void printStrut(struct item thing){
  printf("Item: %s\nPrice: %d\n", thing.i, thing.p);
}

void modify(struct item *thing, char *str, int price){
  strcpy(thing->i, str);
  thing->p = price;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "headers.h"

struct item example(){
  char *items = "applecandychipsberrycakestotesstandtable";
  int prices[] = {2, 5, 1, 3, 8, 9, 2, 9};
  srand(time(NULL));
  int choice = rand() % 8;
  char s[6];
  int i;
  for (i = 0; i < 5; i++){
    *(s + i) = *(items + (5 * choice) + i);
  }
  *(s + 5) = '\0';
  struct item *p;
  (*p).i = s;
  (*p).p = *(prices + choice);
  return *p;
}

void printStrut(struct item thing){
  char str[sizeof(thing.i)];
  int c = 0;
  while (*(thing.i + c) != '\0'){
    *(str + c) = *(thing.i + c);
    c++;
  }
  printf("Item: %s\nPrice: %d\n", str, thing.p);
}

void modify(struct item thing, char *str, int price){
  thing.i = str;
  thing.p = price;
}

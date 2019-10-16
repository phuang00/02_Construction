#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers.h"

int main(){
  struct item thing = example();
  printStrut(thing);
  char *stuff = "bagel";
  modify(&thing, stuff, 30);
  printStrut(thing);
  return 0;
}

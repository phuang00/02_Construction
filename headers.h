#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct item {char i[10]; int p;};

struct item example();
void printStrut(struct item thing);
void modify(struct item *thing, char *str, int price);

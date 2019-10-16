#include "headers.h"

int main(){
  printf("\n*** GENERATING THREE EXAMPLES OF STRUCT ITEM ***\n");
  printf("    STRUCT ITEM HOLDS ITEM NAME AND PRICE\n\n");
  struct item t1 = example();
  printf("t1.i = %s\n", t1.i);
  printf("t1.p = %d\n\n", t1.p);
  struct item t2 = example();
  printf("t2.i = %s\n", t2.i);
  printf("t2.p = %d\n\n", t2.p);
  struct item t3 = example();
  printf("t3.i = %s\n", t3.i);
  printf("t3.p = %d\n\n", t3.p);

  printf("\n*** TESTING FUNCTION THAT PRINTS STRUCT ***\n");
  printf("\nprintStrut(t1);\n");
  printStrut(t1);
  printf("\nprintStrut(t2);\n");
  printStrut(t2);
  printf("\nprintStrut(t3);\n\n");
  printStrut(t3);

  printf("\n*** TESTING FUNCTION THAT MODIFIES STRUCT ***\n");
  char *thing1 = "bagel";
  char *thing2 = "rolls";
  char *thing3 = "grass";
  printf("char *thing1 = \"bagel\"\n");
  printf("char *thing2 = \"rolls\"\n");
  printf("char *thing3 = \"grass\"\n");
  printf("\nmodify(&t1, thing1, 20);\n");
  printf("modified values of t1:\n");
  modify(&t1, thing1, 20);
  printStrut(t1);
  printf("\nmodify(&t2, thing2, 30);\n");
  printf("modified values of t2:\n");
  modify(&t2, thing2, 30);
  printStrut(t2);
  printf("\nmodify(&t3, thing3, 40);\n");
  printf("modified values of t3:\n");
  modify(&t3, thing3, 40);
  printStrut(t3);
  return 0;
}

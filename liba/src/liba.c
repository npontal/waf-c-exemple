#include <stdio.h>

#include "liba/liba.h"

void liba_hello() {
  fprintf(stdout, "%s\n", "hello from liba");
}

void liba_byebye() {
  fprintf(stdout, "%s\n", "Byebye from liba");
}

/* EOF */

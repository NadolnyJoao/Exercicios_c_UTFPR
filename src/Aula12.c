#include <stdio.h>
//Lista
int main() {

  int var = 1, *pt_var = &var;
  printf("%d, %p, %p, %d, %p", var, &var, pt_var, *pt_var, &pt_var);

  return 0;
}

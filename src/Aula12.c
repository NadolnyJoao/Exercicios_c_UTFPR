#include <stdio.h>
//Lista
/*
int main() {

  int var = 1, *pt_var = &var;
  printf("%d, %p, %p, %d, %p", var, &var, pt_var, *pt_var, &pt_var);

  return 0;
}
*/

void incDec(int* ptx, int* pty){

    (*ptx)--;
    (*pty)++;

}


int main(){

    int a = 2, b = 2;
    incDec(&a, &b);
    printf("%d, %d", a, b);

}

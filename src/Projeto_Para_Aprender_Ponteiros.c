#include <stdio.h>
int main() {
  // This pointer will print the actual adress in the memory  of the variable
  // the pointer points to, in this case, the variable "numero";
  /*int numero = 0;
  int *p = &numero;
  printf("%d", p)*/

  // This will print the value of the variable the pointer points to;

  /*int numero = 0;
  int *p = &numero;
  printf("%d", &p)*/

  // This one gonna print the adress of each one of the values in the array
  // "numeros";
  /*
      int numeros[4]= {31, 90, 11, 22};
  int i;
  for (i = 0; i < 4; i++){
      printf("%d\n", &numeros[i]);

  }*/
  /*int TamanhoDeMemoria;
  printf("%zu", sizeof(TamanhoDeMemoria));*/

  // with this, the printf will show all the values in the vetor array, because
  // with the for each expression, the i will represents each one of the vetor
  // position, considering it starts on 0, so it will run across all the vector
  // until the condition has been sactisfacted.
  /*int vetor[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  for(i = 0; i < 11; i++){
      printf("%d \n", vetor[i]);
  }*/
  // This is a interesting case where I use the previous functions that if I put
  // an & right before the value I want to show with the printf, the terminal
  // will show the physical location of the variable, so, apliyng the for each
  // expression, i can get the adress of all the vector.
  /*int vetor[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  for(i = 0; i < 11; i++){
      printf("%d \n", &vetor[i]);
  }*/

  int i = 10;
  int *ptr = &i;
  scanf("%d\n", &i);
  printf("%d, i\n");

  return 0;
}

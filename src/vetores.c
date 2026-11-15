#include <stdio.h>
#include <stdlib.h>
void *iniciaVetor(int n);

int main() {
  int *v = iniciaVetor(5);
  printf("%d", *(v + 2));
  return 0;
  free(v);
}
void *iniciaVetor(int n) {
  int *vetor = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    vetor[i] = i;
  }
  return vetor;
}

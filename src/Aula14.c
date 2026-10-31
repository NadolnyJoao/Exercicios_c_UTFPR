#include <stdio.h>

int buscaVetor(int *vetor, int n, int procurado);

int main() {
  int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d\n", buscaVetor(v, 10, 5));
  return 0;
}
int buscaVetor(int *vetor, int n, int procurado) {
  int i;
  for (i = 0; i < n; i++) {
    if (vetor[i] == procurado) {
      return i;
    }
  }
  return -1;
}

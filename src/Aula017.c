#include <stdio.h>
#define N_COL 4
#define N_LIN 3
#define N 2
// Exercicio 1;
/*
int main() {
  int maior = 0, soma = 0, i, j;
  int campo[N_LIN][N_COL] = {
      {81, 28, 240, 10}, {41, 10, 100, 240}, {20, 280, 110, 35}};
  for (i = 0; i < N_LIN; i++) {
    soma = 0;
    for (j = 0; j < N_COL; j++) {
      soma += campo[i][j];
    }
    if (soma > maior)
      maior = soma;
  }
  for (j = 0; j < N_COL; j++) {
    soma = 0;
    for (i = 0; i < N_LIN; i++) {
      soma += campo[i][j];
    }
    if (soma > maior)
      maior = soma;
  }
  printf("%d", maior);

  return 0;
}*/

int main() {
  int i, j;
  char m[N][128];
  char *buffer;
  for (i = 0; i < N; i++) {
    fgets(m[i], 128, stdin);
  }
  for (i = N - 1; i >= 0; i--) {
    printf("%s", m[i]);
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
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

// Exercicio 2
/*
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
}*/

// Exercicio 3
/*
int main() {
  int i, j;
  // Branco = 0, preto = 1, desc = 9
  int tab[4][4] = {{1, 0, 1, 1}, {1, 9, 9, 9}, {0, 9, 9, 9}, {0, 9, 9, 9}};
  for (i = tab[1][0]; i < 4; i++) {
    for (j = tab[1][0]; j < 4; j++) {
      if (tab[i - 1][j - 1] + tab[i][j - 1] + tab[i - 1][j] == 0 ||
          tab[i - 1][j - 1] + tab[i][j - 1] + tab[i - 1][j] == 1) {
        tab[i][j] = 1;
      } else {
        tab[i][j] = 0;
      }
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", tab[i][j]);
    }
    printf("\n");
  }

  return 0;
}*/

// Exercicio 4

int main() {

  int i, j;
  int m[3][2];
  int n[2][3];
  int result[3][3];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      m[i][j] = rand() % 10;
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      n[i][j] = rand() % 10;
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      result[i][j] = m[i][j] * n[j][i] + ;
    }
  }

  return 0;
}

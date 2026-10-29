#include <stdio.h>

#define N 100

// QUESTÃO 1
// Sem vetor:
/*
int main() {
  int i = 0, nUsr, total = 0, copos, latas;
  scanf("%d", &nUsr);

  for (i = 0; i < nUsr; i++) {
    scanf("%d %d", &latas, &copos);
    if (latas > copos)
      total += copos;
  }
  printf("%d\n", total);

  return 0;
}
*/

// Com vetor:
/*
int main() {
  int i = 0, nUsr, total = 0, copos[N], latas[N];
  scanf("%d", &nUsr);

  for (i = 0; i < nUsr; i++)
    scanf("%d %d", &latas[i], &copos[i]);

  for (i = 0; i < nUsr; i++) {
    if (latas[i] > copos[i]) {
      total += copos[i];
    }
  }
  printf("%d\n", total);

  return 0;
}
*/

// QUESTÃO 2
// Sem vetor:
/*
int main() {
  int interr, i = 0, lampa = 0, lampb = 0, nusr;
  scanf("%d", &nusr);

  for (i = 0; i < nusr; i++) {
    scanf("%d", &interr);
    if (interr == 1) {
      lampa = 1 - lampa;
    } else if (interr == 2) {
      lampa = 1 - lampa;
      lampb = 1 - lampb;
    }
  }

  printf("%d\n", lampa);
  printf("%d\n", lampb);

  return 0;
}
*/

// Com vetor:
/*
int main() {
  int i, nusr, lampa = 0, lampb = 0, interr[N];
  scanf("%d", &nusr);

  for (i = 0; i < nusr; i++) {
    scanf("%d", &interr[i]);
  }

  for (i = 0; i < nusr; i++) {
    if (interr[i] == 1) {
      lampa = 1 - lampa;
    } else if (interr[i] == 2) {
      lampa = 1 - lampa;
      lampb = 1 - lampb;
    }
  }

  printf("%d\n", lampa);
  printf("%d\n", lampb);

  return 0;
}
*/
// QUESTÃO 3
/*
int main() {
  int i, j, nUsr, dist, menorDist;
  int fita[N];

  scanf("%d", &nUsr);

  for (i = 0; i < nUsr; i++)
    scanf("%d", &fita[i]);

  for (i = 0; i < nUsr; i++) {
    if (fita[i] == -1) {
      menorDist = 1000;
      for (j = 0; j < nUsr; j++) {
        if (fita[j] == 0) {
          dist = (i > j) ? (i - j) : (j - i);
          if (dist < menorDist)
            menorDist = dist;
        }
      }
      if (menorDist > 9)
        menorDist = 9;

      fita[i] = menorDist;
    }
  }

  for (i = 0; i < nUsr; i++) {
    printf("%d", fita[i]);
    if (i < nUsr - 1)
      printf(" ");
  }
  printf("\n");

  return 0;
}
*/
// QUESTÃO 4
/*
int main() {
  int i = 0, j = 0, nUsr, total = 0, repetido;
  int ras[N];

  scanf("%d", &nUsr);

  for (i = 0; i < nUsr; i++)
    scanf("%d", &ras[i]);

  for (i = 0; i < nUsr; i++) {
    repetido = 0;
    for (j = 0; j < i; j++) {
      if (ras[i] == ras[j]) {
        repetido = 1;
        break;
      }
    }
    if (!repetido) {
      total++;
    }
  }

  printf("%d\n", total);

  return 0;
}
*/

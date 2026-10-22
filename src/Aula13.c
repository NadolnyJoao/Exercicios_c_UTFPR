#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lista
#define N 5
/*
int main() {
  int vetor[10], i;
  for (i = 0; i < 10; i++)
    vetor[i] = i;
  for (i = 0; i < 10; i++)
    printf("%d", vetor[i]);
    return 0;
}*/

/*
int main() {
  srand(time(NULL));
  int i, vetor[N];

  for (i = 0; i < N; i++)
    vetor[i] = (rand() % N) + 1;
  for (i = 0; i < N; i++) {
    printf("%d\n", vetor[i]);
    if (vetor[i] == i)
      printf("\n%d\n", vetor[i]);
  }
  return 0;
}*/

/*
int main() {
  srand(time(NULL));
  int i, x = 0, vetor[6] = {1, 3, 4, 8, 5, 10};
  for (i = x; i < 6; i += 2) {
    printf("%d", vetor[i]);
  }
  x = 1;
  for (i = x; i < 6; i += 2) {
    printf("%d", vetor[i]);
  }
}*/

// Exercicio 1;
/*
int main() {

  srand(time(NULL));
  int vetor[N], i, soma = 0, media, maior = 0, menor = 0;
  for (i = 0; i < N; i++) {
    vetor[i] = rand() % (80 + 1 - 20) + 20;
    soma += vetor[i];
  }
  media = soma / N;
  printf("A media e: %d\n", media);
  for (i = 0; i < N; i++) {
    if (vetor[i] > media) {
      printf("%d é maior que a média\n", vetor[i]);
      maior++;
    }
    if (vetor[i] == media)
      printf("%d é igual que a média\n", vetor[i]);
    if (vetor[i] < media) {
      printf("%d é menor que a média\n", vetor[i]);
      menor++;
    }
  }
  printf("%d maiores e %d menores.\n", maior, menor);

  return 0;
}*/

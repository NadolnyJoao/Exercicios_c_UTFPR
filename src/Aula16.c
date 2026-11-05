#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFLEN 1024
// Exercício 1
/*
char *empacotaString(char *string) {
  int tam = strlen(string);
  char *retorno = (char *)malloc(tam + 1 * sizeof(char));
  for (int i = 0; i <= tam; i++) {
    retorno[i] = string[i];
  }
  return retorno;
}

int main() {

  char buffer[BUFLEN];
  fgets(buffer, BUFLEN, stdin);
  char *newStr = empacotaString(buffer);
 printf("%s\n", newStr);
  free(newStr);
  return 0;
}*/

// Exercício 2
/*
char *concatenaStrings(char *s1, char *s2) {
  int tamS1 = strlen(s1) - 1, tamS2 = strlen(s2), tam = tamS1 + tamS2;
  int i, cont = 0;
  char *retorno = (char *)malloc((tam + 1) * sizeof(char));
  for (i = 0; i < tamS1; i++)
    retorno[cont++] = s1[i];

  for (i = 0; i < tamS2; i++)
    retorno[cont++] = s2[i];
  retorno[tam] = '\0';
  return retorno;
}

int main() {
  char buffer[BUFLEN], buffer2[BUFLEN];
  fgets(buffer, BUFLEN, stdin);
  fgets(buffer2, BUFLEN, stdin);
  printf("%s", concatenaStrings(buffer, buffer2));

  return 0;
}*/

void balanceamentoDeParenteses(char *str, int *parenteses) {

  int tam = strlen(str);
  for (int i = 0; i < tam + 1; i++) {
    if (str[i] == '(') {
      parenteses[i] = -1;
    }
  }
}

int main() {
  char *frase = "if(oie)";
  int parenteses[7];
  balanceamentoDeParenteses(frase, parenteses);
  for (int i = 0; i < 7; i++)
    printf("%d", parenteses[i]);
  return 0;
}

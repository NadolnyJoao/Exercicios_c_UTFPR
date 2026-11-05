#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Exercício 1
/*
#define BUFLEN 1024
char *empacotaString(char *string) {
  int tam = strlen(string);
  char *retorno = (char *)malloc(tam * sizeof(char) + 1);
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

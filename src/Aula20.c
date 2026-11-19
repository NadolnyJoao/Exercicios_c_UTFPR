#include <stdio.h>
#include <stdlib.h>
/*
typedef struct {
  float maior, meio, menor;
} MaMeMe;

void classifica(MaMeMe *Estrutura, float a, float b, float c) {
  float temp;
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (a > c) {
    temp = a;
    a = c;
    c = temp;
  }

  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }
  Estrutura->maior = c;
  Estrutura->meio = b;
  Estrutura->menor = a;
}

int main() {
  MaMeMe estruct;
  classifica(&estruct, 13.0, 1.0, 3.0);
  printf("maior %.0f meio %.0f menor %.0f", estruct.maior, estruct.meio,
         estruct.menor);
}*/

typedef struct {
  int largura;
  int altura;
  unsigned char **dados;
} GSImage;

void destroiGSImage(GSImage *img) {
  int i;
  for (i = 0; i < img->altura; i++)
    free(img->dados[i]);
  free(img->dados);
  free(img);
}

GSImage *criaGSImage(int largura, int altura) {
  GSImage *image = malloc(sizeof(GSImage));
  image->largura = largura;
  image->altura = altura;
  image->dados = malloc(altura * sizeof(unsigned char *));
  for (int i = 0; i < altura; ++i) {
    image->dados[i] = malloc(largura * sizeof(unsigned char));
  }
  return image;
}

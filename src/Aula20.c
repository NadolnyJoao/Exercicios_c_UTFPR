#include <stddef.h>
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
#define LARG 100
#define ALT 100
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

GSImage *reduzPelaMetade(GSImage *img) {
  if (img->altura % 2 != 0 || img->largura % 2 != 0) {
    return NULL;
  }
  GSImage *imgreduzida = img;
  imgreduzida->altura = img->altura / 2;
  imgreduzida->largura = img->largura / 2;
  for (int i = 0; i < imgreduzida->altura; i++) {
    for (int j = 0; j < imgreduzida->largura; j++) {
      imgreduzida->dados[i][j] = (imgreduzida->dados[i * 2][j * 2] +
                                  imgreduzida->dados[i * 2 + 1][j * 2] +
                                  imgreduzida->dados[i * 2][j * 2 + 1] +
                                  imgreduzida->dados[i * 2 + 1][j * 2 + 1]) /
                                 4;
    }
  }

  return imgreduzida;
}

void desenha() {
  float media1 = 0, media2 = 0;
  GSImage *imagem = criaGSImage(LARG, ALT);
  for (int i = 0; i < ALT; i++) {
    for (int j = 0; j < LARG; j++) {
      imagem->dados[i][j] = i * j;
      media1 += imagem->dados[i][j];
    }
  }
  GSImage *imagemReduzida = reduzPelaMetade(imagem);
  for (int i = 0; i < ALT; i++) {
    for (int j = 0; j < LARG; j++) {
      media2 += imagemReduzida->dados[i][j];
    }
  }
  printf("%.2f %.2f", media1, media2);
  destroiGSImage(imagemReduzida);
  destroiGSImage(imagem);
  return;
}

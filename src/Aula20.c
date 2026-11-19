#include <stdio.h>

typedef struct {
  float maior, meio, menor;
} MaMeMe;

MaMeMe classifica(float a, float b, float c) {
  MaMeMe stru;
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
  stru.maior = c;
  stru.meio = b;
  stru.menor = a;
  return stru;
}

int main() {
  MaMeMe estruct = classifica(13.0, 1.0, 3.0);
  printf("maior %.0f meio %.0f menor %.0f", estruct.maior, estruct.meio,
         estruct.menor);
}

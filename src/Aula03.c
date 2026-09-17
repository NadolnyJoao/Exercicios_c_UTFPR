#include <stdio.h>
int main() {
  // Exercicio 1
  /*
  double gas; //preco da gasolina
  double alcool; //preco do alcool
  double gasCTT;//
  double alcoolCTT;
  double kmsgas;
  double kmsAlcool;
  printf("Insira o preço atual da gasolina e do alcool. ");
  scanf("%lf %lf", &gas, &alcool);
  printf("Agora, insira o quanto o carro da CTT faz por litro usando gasolina e
  usando alcool. "); scanf("%lf %lf", &gasCTT, &alcoolCTT); kmsgas = gas/gasCTT;
  kmsAlcool = alcool/alcoolCTT;
  if (kmsAlcool > kmsgas){
      printf("use alcool");
  }*/
  // Exercicio 2
  /*
  int nUsr;
  int c;
  int d;
  int u;
  scanf("%i", &nUsr);
  c = nUsr%10;
  nUsr = nUsr/10;
  d = nUsr%10;
  nUsr = nUsr/10;
  u = nUsr%13;
  nUsr = nUsr/10;
  c = c*100;
  d = d*10;
  nUsr = u+d+c;
  printf("%d", nUsr);
  */
  // Exercicio 3;
  /*
  int nUsr1;
  int nUsr2;
  int nUsr3;

  scanf ("%d %d %d", &nUsr1, &nUsr2, &nUsr3);
  if (nUsr1 > nUsr2 && nUsr1 > nUsr3){
      printf("%d", nUsr1);
  }else if(nUsr2 > nUsr1 && nUsr2 > nUsr3){
  printf("%d", nUsr2);}
  else {printf("%d", nUsr3);}
  */
  // Exercicio 4;
  /*
  int horaInicio;
  int horaFim;
  int tempoDeJogo;

  scanf("%d %d", &horaInicio, &horaFim);
  if (horaInicio >= 0 || horaInicio <= 24 && horaFim >= 0 || horaFim <= 24){
   if(horaInicio > horaFim){
      horaInicio = horaInicio - 24;
      horaInicio = horaInicio *(-1);
      //horaFim = horaFim - 24;
      tempoDeJogo = horaInicio + horaFim;
      //tempoDeJogo = tempoDeJogo * (-1);
      printf("o tempo de jogo foi de %dh", tempoDeJogo);
   }else if (horaInicio == horaFim){
      printf("O jogo durou 24h");
   }else{
      tempoDeJogo = horaFim - horaInicio;
      printf("o tempo de jogo foi de %dh", tempoDeJogo);
   }

  }*/
    //Exercicio 5
    /*
    int x, y;

    printf("Digite os valores de x e y: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (y == 0) {
        printf("Sobre o eixo X\n");
    } else if (x == 0) {
        printf("Sobre o eixo Y\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }*/


  return 0;
}

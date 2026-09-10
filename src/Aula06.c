#include <stdio.h>
#define N_TERMOS 100000000
int main(){

    //Atividade 1
    /*
    int nUsr = 0, total = 0, i = 0;
//    for (i = 0; i < 10; i ++){
//        scanf("%d", &nUsr);
//        if(nUsr < 20)
//        total += nUsr; }
//
    while (i < 10){
        scanf("%d", &nUsr);
        if(nUsr < 20)
        total += nUsr;
        i ++;

    }
    total = total / 10;
    printf ("%d", total);
    */

    //Atividade 2
    /*
int n1, n2, resultado;
for(int nUsr = 1000; nUsr <= 9999; nUsr++){
    n1 = nUsr / 100;
    n2 = nUsr % 100;
    resultado = n1 + n2;

    if (resultado * resultado == nUsr){
        printf("%d\n", nUsr);
    }
}*/

    //Atividade 3
    /*
    float notas = 0.0, nUsr = 0.0, maior = 0.0, menor = 0.0;
    int i;
    for (i = 0; i < 7; i++){
        scanf("%f", &nUsr);

        notas += nUsr;
        if (maior < nUsr){
            maior = nUsr;
        }
        if (menor > nUsr){
            menor = nUsr;
        }
    }
    notas = notas - maior;
    notas = notas - menor;
    printf("%.2f", (float) notas);
    */

    //Atividade 4
    /*
    int nUsr = 0, i, soma = 0;
    scanf("%d", &nUsr);
    for (i = 1; i < nUsr; i++){
        if (nUsr%i == 0){
            soma += i;
            }
    }
    if (soma == nUsr){
        printf("eh perfeito");
    }else {
        printf("Nao eh perfeito");
        }*/

    //Atividade 5
    /*
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2, horas, minutos, segundos, tempo;

    scanf("%d:%d:%d", &horas1, &minutos1, &segundos1);
    scanf("%d:%d:%d", &horas2, &minutos2, &segundos2);

    if (horas1 < 0 || minutos1 < 0 || minutos1 > 59 || segundos1 < 0 || segundos1 > 59 ||
        horas2 < 0 || minutos2 < 0 || minutos2 > 59 || segundos2 < 0 || segundos2 > 59) {
        printf("Entrada invalida!\n");
        return 1;
    }

    tempo = (horas1 + horas2) * 3600;
    tempo += (minutos1 + minutos2) * 60;
    tempo += segundos1 + segundos2;

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    */

    //Atividade 6
/*
float pi = 0.0, sinal = 1.0;
    int i, denominador = 1;

    for (i = 0; i < N_TERMOS; i++){
        pi += sinal * (1.0 / denominador);
        sinal = -sinal;
        denominador += 2;
    }

    pi = pi * 4.0;
    printf("%f", pi);
    */


    return 0;
}

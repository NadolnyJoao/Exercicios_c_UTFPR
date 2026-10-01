//Exercicio 1;
/*
#include <stdio.h>
#define LARGURA_FAIXA 6
void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();

        void main (){
    int i;
    // Funciona até desligar ou o tecido acabar.
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
        if (i == 1)
            pontoRolo1 ();
        else if (i == LARGURA_FAIXA-2)
            pontoRolo2 ();
        else
            moveAgulha ();
        }
        rolaTecido ();
    }
    }
    void pontoRolo1(){
    printf("v");
    }
    void pontoRolo2(){
    printf("a");
    }
    void moveAgulha(){
    printf(" ");
    }
    void rolaTecido(){
    printf("\n");
    }
*/

//Exercicio 2;

#include <stdio.h>
#define LARGURA_FAIXA 6

void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();

int main() {
    int i, n_pontos = 0;

    // Funciona até desligar ou o tecido acabar.
    while (1) {
        for (i = 0; i < LARGURA_FAIXA; i++) {
            if (i == n_pontos) {
                pontoRolo1();
            } else {
                pontoRolo2();
            }
        }

        rolaTecido();

        if (n_pontos >= LARGURA_FAIXA - 1) {
            n_pontos = 0;
        } else {
            n_pontos++;
        }
    }

    return 0;
}

void pontoRolo1() {
    printf("v");
}

void pontoRolo2() {
    printf("a");
}

void moveAgulha() {
    printf(" ");
}

void rolaTecido() {
    printf("\n");
}

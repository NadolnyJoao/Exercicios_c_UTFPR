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
/*
#include <stdio.h>
#define LARGURA_FAIXA 6
void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();

        void main (){
    int i, n_pontos;
    // Funciona até desligar ou o tecido acabar.
    while (1)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
        if (i < n_pontos)
            pontoRolo1 ();
        else
            pontoRolo2 ();
        }
        if (n_pontos >= LARGURA_FAIXA)
            n_pontos = 0;
        else
            n_pontos++;
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

//Exercicio 3;

#include <stdio.h>
#define LARGURA_FAIXA 6
void pontoRolo1();
void pontoRolo2();
void moveAgulha();
void rolaTecido();

        void main (){
    int i, n_pontos, eh_v = 1, k = 0;
    // Funciona até desligar ou o tecido acabar.
    while (k < 15)
    {
        for (i = 0; i < LARGURA_FAIXA; i++)
        {
            if(eh_v == 1){
        if (i < n_pontos)
            pontoRolo1 ();
        else
            moveAgulha ();
        }else
            if(eh_v == 0){
        if (i < n_pontos)
            pontoRolo2 ();
        else
            moveAgulha ();
        }

        }



        if (n_pontos >= LARGURA_FAIXA){
            n_pontos = 0;
            eh_v = !eh_v;
        }
        else
            n_pontos++;
        rolaTecido ();
        k++;
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



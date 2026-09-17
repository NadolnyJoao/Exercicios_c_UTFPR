#include <stdio.h>

int main ()
{
    //Lista Aula 08;
    /*
    unsigned int base, expoente;
    unsigned long long total = 1;

    scanf ("%u", &base);
    scanf ("%u", &expoente);

    while (expoente > 0)
    {
        total *= base;
        expoente--;
    }

    printf ("%llu\n", total);
    */

   //Exercicio 01;
   /*
   int ai, i = 1;
   scanf("%d", &ai);

   while(ai > 1){

    if(ai%2 == 0){
        ai = ai / 2;
    }else
        ai = (ai * 3) + 1;

    printf("%d, ", ai);
    i++;
   }
    printf("%d ", i);
    */

    //Exercicio 02;
    /*
    int n, acessos, i = 0, soma = 0, meta = 1000000;
    scanf("%d", &n);
    while (i < n && soma < meta){
        scanf("%d \n", &acessos);
        soma += acessos;
        i++;
    }
    if (soma >= meta){
        printf("O site alcancou 1m de acessos no dia: %d da campanha", i);
    }else
        printf("1");
    */

    //Exercicio 03;
    /*
    int nUsr, ant1 = 0, ant2 = 1, seq = 0, i;
    scanf("%d", &nUsr);
    for (i = 0; i < nUsr; i++){
        printf("%d - ", seq);
        seq = ant1 + ant2;
        ant1 = ant2;
        ant2 = seq;

    }*/

    //Exercicio 04;
    /*
    int nUsr, i, n_um, n_dois, n_tres, tem_dois = 0;
    scanf("%d", &nUsr);
    for(i = 0; i <= nUsr && !tem_dois; i++){
        scanf("%d", &n_um);
        scanf("%d", &n_dois);
        scanf("%d", &n_tres);
        if (n_um > n_dois && n_dois < n_tres){
            tem_dois = 1;
        }

    }
    if(tem_dois){
        printf("N");
    }else
        printf("S");
    */

    //Exercicio 05;
    /*
    int nUsr, nUsr_copia, i, comparacao = 0;

    scanf("%d", &nUsr);
    nUsr_copia = nUsr;
     while (nUsr > 0) {
        comparacao = comparacao * 10 + (nUsr % 10);
        nUsr /= 10;
    }
       if (comparacao == nUsr_copia) {
        printf("Eh palindromo");
    } else {
        printf("Nao eh");
    }*/

    return (0);
}

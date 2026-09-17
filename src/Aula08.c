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
    printf("foram gerador %d elementos ", i);
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

    return (0);
}

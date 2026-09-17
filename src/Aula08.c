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

   //Exercicio 1;
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

    return (0);
}

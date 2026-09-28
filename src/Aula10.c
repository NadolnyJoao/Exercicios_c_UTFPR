#include <stdio.h>
//Lista;
    /*
    int eh_bisexto(int ano){
        return (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));
    }
    int main(){
        int ano_atual = 2024;
        printf("%d", eh_bisexto(ano_atual));
    return 0;
    }*/

    /*
    int eh_pa(int n1, int n2, int n3, int n4){
    if (n2 - n1 == n4 - n3 && n3 - n2 == n2 - n1){
        int razao = n2 - n1;
        return (razao);
    }else
        return 0;

    }
    int main(){

    int n1 = 0, n2 = 2, n3 = 4, n4 = 6, pa;
    pa = eh_pa(n1, n2, n3, n4);
    if (pa != 0){
        printf("%d", pa);
    }else{
        printf("nao eh pa");
    }
    return 0;}
    */
    //Exercicio 1;
    /*
    int arredonda (double x){
        if (x >= 0){
            return ((int) (x + 0.5));
        return ((int) (x - 0.5));
        }
    }


    int main(){
    float nUsr = 2.7;
    printf("%d ", arredonda(nUsr));


    return 0;
    }
*/
    //Exercicio 2;
/*
    double casasDecimais (double x);
    int main(){
    float nUsr = 1.25;
    printf("%f ", casasDecimais(nUsr));
    return 0;
    }

    double casasDecimais (double x){

        int xInt = (int) x;
        return (float) xInt - x;


    }
*/
    //Exercicio 3;
    /*
    int proxFibonacci (int n);
    int main(){
    printf("%d ", proxFibonacci(15));

    return 0;
    }
    int proxFibonacci (int n){
    int anterior = 0, atual = 1, passou = 0, i, fibonacci;
    while(fibonacci < n){
        fibonacci = atual + anterior;
        anterior = atual;
        atual = fibonacci;

    }
    return fibonacci;
    }
    */

    //Exercicio 4;
    /*
    unsigned long long potencia (unsigned int base, unsigned int expoente);
    int main(){

    printf("%d ", potencia(3, 2));

    return 0;}

    unsigned long long potencia (unsigned int base, unsigned int expoente){
    int i, resultado = 1;
    for (i = 1; i <= expoente; i++){
    resultado *= base;

    }
    return resultado;
    }*/

    //Exercicio 5;
    /*
    unsigned int inverteNum (unsigned int n);
    int main(){
    printf("%d ", inverteNum(1234));

    return 0;
    }
    unsigned int inverteNum (unsigned int n){
        int inv =0;
        while (n){
            inv = inv*10 + n%10;
            n /= 10;
        }
        return inv;
    }*/

    //Exercicio 6;
    /*
    int testaTipoChar (char c);
    int main(){

    printf("%d", testaTipoChar('x'));


    return 0;
    }
    int testaTipoChar (char c){
    if ((c == 'A') || (c == 'E') ||(c == 'I') ||(c == 'O') ||(c == 'U')){
        return 1;
    }else if ((c == 'a') || (c == 'e') ||(c == 'i') ||(c == 'o') ||(c == 'u')){
        return 2;
    }else if (c > 'A' && c <= 'Z')
        return 3;
    else if (c > 'a' && c <= 'z')
        return 4;
    else if (c >= 48 && c <= 57)
        return 5;

    return 0;
    }
    */





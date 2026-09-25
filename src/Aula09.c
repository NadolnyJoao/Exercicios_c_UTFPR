#include <stdio.h>
#define N 5
int main(){
    //Lista;
    /*
    int i, j;
    for (i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d \n", i, j, i*j);

        }
        printf("\n");
    }

    int i, j, n = 4;
    for (i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
        printf("A");
        }
        printf("\n");
    }

     int i, j, n = 4;
    for (i = 1; i <= n; i++){
        for(j = 1; j <= n - i + 1; j++){
        printf("A");
        }
        printf("\n");
    }*/

    //Exercicio 1;
    /*
    int dado1, dado2;
    for (dado1 = 1; dado1 <= 7; dado1++){
       //printf(" %d:", dado1);
        for(dado2 = 1; dado2 <=7; dado2++){
            printf("%d:%d \n",dado1, dado2);
        }
}*/

    //Exercicio 1.2;
    /*
    int dado1, dado2, dado3;
    for (dado1 = 1; dado1 <= 7; dado1++){
       //printf(" %d:", dado1);
        for(dado2 = 1; dado2 <=7; dado2++){

            for(dado3 = 1; dado3 <= 7; dado3++){
                            printf("%d:%d:%d \n",dado1, dado2, dado3);

            }
        }
}   */

    //Exercicio 1.3
    /*
    int dado1, dado2, dado3;
    for (dado1 = 1; dado1 <= 7; dado1++){
       //printf(" %d:", dado1);
        for(dado2 = dado1; dado2 <=7; dado2++){

            for(dado3 = dado2; dado3 <= 7; dado3++){
                            printf("%d:%d:%d \n",dado1, dado2, dado3);

            }
        }
}*/

    //Exercicio 2;
    /*
    int num = 2, j, eh_primo, soma = 0, count_primos = 0;

while(count_primos < N) {
    eh_primo = 1;

    for(j = 2; j < num; j++) {
        if (num % j == 0) {
            eh_primo = 0;
            break;
        }
    }

    if(eh_primo) {
        soma += num;
        printf("%d ", num);
        count_primos++;
    }
    num++;
}
printf("\n%d ", soma);
*/

    //Exercicio 3;
    /*
int n;
    scanf("%d", &n);

    int num = 1;

    while (1) {
        int contador = 0;

        for (int i = 1; i <= n; i++) {
            if (num % i != 0) {
                break; // Se não for divisível por 'i', já descarta esse 'num'
            }
            contador++;
        }

        // Se conseguiu dividir por todos os números de 1 até n
        if (contador == n) {
            printf("O menor numero divisivel de 1 a %d eh: %d\n", n, num);
            break;
        }

        num++;
    }*/

    //Exercicio 4;
    /*
    int linhas, colunas, nUsr, aux = 0;
    scanf("%d ", &nUsr);
    for (linhas = 0; linhas < nUsr; linhas++){
        printf("\n");

        for (colunas = 0; colunas < nUsr - linhas; colunas++){
            printf("%c", 'A' + colunas);
        }


    }*/


return 0;
}

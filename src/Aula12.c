#include <stdio.h>
// Lista
/*
int main() {

  int var = 1, *pt_var = &var;
  printf("%d, %p, %p, %d, %p", var, &var, pt_var, *pt_var, &pt_var);

  return 0;
}


void incDec(int* ptx, int* pty){

    (*ptx)--;
    (*pty)++;

}


int main(){

    int a = 2, b = 2;
    incDec(&a, &b);
    printf("%d, %d", a, b);

}


    int calcula_media(int nUsr){
    int media;

    return media;
    }

int main(){
    int n = 0, i, nUsr;
    for(i = 0; i <= n; i++){
        scanf("%d", &nUsr);
        calcula_media(nUsr);

    }

}
*/
// Exercicio 1;
/*
void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
    {
        *h = total_segundos / 3600;
        *m = (total_segundos % 3600) / 60;
        *s = total_segundos % 60;

    }


int main(){
    int nUsr = 2000, h = 0, m = 0, s = 0;
    segundosParaHMS(nUsr, &h, &m, &s);
    printf("%d:%d:%d", h, m, s);





return 0;
}
*/

// Exercicio 2;
/*
void removeExtremos (int *n, int *pri, int *ult)
{
    int tn, pot = 1;
    tn = *n;
    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main(){
    int n = 121;
    int pri = 0;
    int ult = 0;
    int eh_palindromo = 1;

    while (n >= 10) {
        removeExtremos(&n, &pri, &ult);

        if (pri != ult) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("E um palindromo.\n");
    } else {
        printf("NAO e um palindromo.\n");
    }

    return 0;
}
*/

// Exercicio 3;#include <stdio.h>

int verifica_k_alternante(int n, int *k_out) {
    if (n <= 1) return 0;

    int primeiro;
    if (scanf("%d", &primeiro) != 1) return 0;

    int paridade_atual = (primeiro % 2 == 0); // 1 para par, 0 para ímpar
    int k = 1;
    int i = 1;
    int prox; // Declarada aqui para escopo correto

    // Lê o primeiro segmento para determinar o valor de k
    while (i < n) {
        if (scanf("%d", &prox) != 1) return 0;
        i++;

        if ((prox % 2 == 0) == paridade_atual) {
            k++;
        } else {
            // A paridade mudou, indicando o fim do primeiro segmento
            break;
        }
    }

    // Retorna k por referência
    *k_out = k;

    // Se a sequência inteira tem apenas um segmento
    if (i == n) {
        return 1;
    }

    // O elemento atual (`prox`) já pertence ao segundo segmento
    int paridade_esperada = !paridade_atual;
    int count_atual = 1;

    if ((prox % 2 == 0) != paridade_esperada) {
        return 0; // Retorna imediatamente se violar a alternância
    }

    // Valida o restante da sequência
    while (i < n) {
        int num;
        if (scanf("%d", &num) != 1) return 0;
        i++;

        int paridade_num = (num % 2 == 0);

        if (paridade_num == paridade_esperada) {
            count_atual++;
            if (count_atual > k) {
                return 0; // Segmento excedeu o tamanho k
            }
        } else {
            // Mudou de paridade antes de atingir o tamanho k
            if (count_atual < k) {
                return 0;
            }
            // Alterna para o próximo segmento
            paridade_esperada = !paridade_esperada;
            count_atual = 1;

            if (paridade_num != paridade_esperada) {
                return 0;
            }
        }
    }

    // Verifica se o último segmento não estourou o limite de k
    if (count_atual > k) {
        return 0;
    }

    return 1;
}

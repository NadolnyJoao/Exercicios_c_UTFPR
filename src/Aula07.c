#include<stdio.h>
int main(){
    //Lista Aula 07;
    /*
    bool intervao_true = true;
    int nUsr;
    while (intervao_true){
        scanf("\n %d", &nUsr);
        if (10 > nUsr || nUsr > 20){
            intervao_true = false;
        }else
        printf("ECO: %d\n", nUsr);
    }

    float Foolano = 1.50, Barano = 1.10;
    int i;
    for(i = 0; Foolano > Barano; i++){
        Foolano += 0.2;
        Barano += 0.3;
    }
    printf("Vai demorar %d anos ate Barano ficar mais alto que Foolano", i);

    int min, max, nUsr = 0, nUsr_min = 10, nUsr_max = 1, i, qntos_ints = 0;

    for(i = 0; nUsr >= 0; i++){
        scanf ("%d", &nUsr);
        if(1 <= nUsr && nUsr <= 10){
            if(nUsr >= nUsr_max){
                nUsr_max = nUsr;
            }
            if(nUsr <= nUsr_min){
                nUsr_min = nUsr;
            }
            qntos_ints++;
        }

    }
    if (qntos_ints){
    printf("o maior numero que respeite o intervalo de 1 a 10 foi %d, e o menor foi %d", nUsr_max, nUsr_min);
    }else printf("Erro, nenhum numero que respeite o intervalo foi dado");
     */

    //Atividade 01;
    /*
    int nUsr, i, fatorial = 0;
    scanf("%d", &nUsr);
     i = nUsr-1;
     fatorial = nUsr;
    while(i >= 2){
       fatorial *= i;
       i--;
    }printf("%d", fatorial);
    */

    //Atividade 02;
    /*
    int i = 1, n, ant, atual;
    int flag;
    scanf("%d", &n);
    scanf("%d", &ant);
    while (i <= n){
        scanf("%d", &atual);
        if(atual <= ant){
            flag--;
        }
        if(atual >= ant){
            flag ++;
        }
        ant = atual;
        i++;

    }
    if (flag == n){
        printf("Crescente");
    }
    else if(flag == -n){
        printf("Decrescente");
    }else printf("Nem um nem outro");
    */

    //Atividade 03;
    /*
    int n1, n2, aux, resto;
    scanf("%d/%d", &n1, &n2);
    while (n1 >= n2){
    n1 = n1 - n2;
    aux++;
    if (n1 < n2){
        resto = n1;
        printf("resto %d \n", resto);
    }
    }printf("%d", aux);
    */

    //Atividade 04;
    /*
    int inteiro, n, modulo, achou;
    scanf("%d %d", &inteiro, &n);
    while(inteiro > 0 && !achou){
        modulo = inteiro%10;
        inteiro = inteiro/10;
        if (modulo == n){
            achou = 1;
        }
    }if (achou){
        printf("Tem");
    }else printf("Nao tem");
    */

    //Atividade 05
    /*
    int ant, atual = 0, i = 1;
    scanf ("%d", &ant);
    while(atual >= 0){
        scanf("%d", &atual);
        if(atual > ant){
            i++;
        }else if(atual < ant && atual >= 0){ i = 1;}
        ant = atual;
    }printf("%d", i);
    */


return 0;
}

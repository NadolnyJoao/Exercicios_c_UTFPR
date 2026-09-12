#include <stdio.h>

int main()
{
    //Atividade 1
    /*
    float gasolina, alcool, kmGasolina, kmAlcool;

    printf("Informe o preco da gasolina e do alcool: ");
    scanf("%f %f", &gasolina, &alcool);

    printf("Informe os km/l da gasolina e do alcool: ");
    scanf("%f %f", &kmGasolina, &kmAlcool);

    gasolina = gasolina / kmGasolina;
    alcool = alcool / kmAlcool;

    if (alcool < gasolina) {
        printf("Alcool compensa mais");
    } else {
        printf("Gasolina compensa mais");
    }*/

    //Atividade 2
    /*
    int nUsr, n1, n2, n3, invertido;

    scanf("%d", &nUsr);

    n1 = nUsr / 100;        // centena
    n2 = (nUsr / 10) % 10; // dezena
    n3 = nUsr % 10;        // unidade

    invertido = n3 * 100 + n2 * 10 + n1;

    printf("%d", invertido);
    */

    //Atividade 3
    /*
    int n1, n2, n3, maior;

    scanf("%d %d %d", &n1, &n2, &n3);

    maior = n1;

    if (maior < n2) {
        maior = n2;
    }

    if (maior < n3) {
        maior = n3;
    }

    printf("%d", maior);
    */

    //Atividade 4
    /*
    int inicio, fim, duracao;

    scanf("%d %d", &inicio, &fim);

    if (fim > inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + fim;
    }

    printf("O jogo durou %d hora(s)", duracao);
*/

    //Atividade 5
   /*    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem");
    }
    else if (y == 0) {
        printf("Eixo X");
    }
    else if (x == 0) {
        printf("Eixo Y");
    }
    else if (x > 0 && y > 0) {
        printf("Q1");
    }
    else if (x < 0 && y > 0) {
        printf("Q2");
    }
    else if (x < 0 && y < 0) {
        printf("Q3");
    }
    else {
        printf("Q4");
    }
    */


    return 0;

}

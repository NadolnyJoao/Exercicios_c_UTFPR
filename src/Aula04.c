#include <stdio.h>
int main(){
    //Lista 04
    /* int nUsr;
    scanf ("%d", &nUsr);
    if (nUsr&2 == 0 && nUsr > 10 || nUsr&2 == 1 && nUsr < 50){
        printf("SIM");
    }else
    printf("NAO");

    int idade, anosContribuindo, aniver, anoAtual, comecouContrib;
    scanf("%d %d %d", &aniver, &anoAtual, &comecouContrib);
    idade = anoAtual - aniver;
    anosContribuindo = anoAtual - comecouContrib;
    if (idade >= 65 || anosContribuindo >= 30 || idade >= 60 && anosContribuindo >= 25)
        printf("Ao final deste ano, voce tera %d anos e podera se aposentar", idade);
            else
                printf("Ao final deste ano, voce tera %d anos, e ainda nao podera se aposentar", idade);*/


    // Exercicio 1;
    /*
        int a, b, c;

        printf("Digite tres numeros distintos: ");
        scanf("%d %d %d", &a, &b, &c);

        if (a < b && b < c) {
            printf("%d %d %d\n", a, b, c);
        } else if (a < c && c < b) {
            printf("%d %d %d\n", a, c, b);
        } else if (b < a && a < c) {
            printf("%d %d %d\n", b, a, c);
        } else if (b < c && c < a) {
            printf("%d %d %d\n", b, c, a);
        } else if (c < a && a < b) {
            printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", c, b, a);
        }

        return 0;
    }
    */

    // Exercicio 2;
    /*
    #include <stdio.h>

    int main(void)
    {
        int diaNascimento, mesNascimento, anoNascimento;
        int diaAtual, mesAtual, anoAtual;
        int idade;

        printf("Digite a data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &diaNascimento, &mesNascimento, &anoNascimento);

        printf("Digite a data atual (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

        idade = anoAtual - anoNascimento;

        if (mesAtual < mesNascimento ||
            (mesAtual == mesNascimento && diaAtual < diaNascimento)) {
            idade--;
        }

        printf("Idade: %d anos\n", idade);

        return 0;
    }
    */

    // Exercicio 3;
    /*
    #include <stdio.h>

    int main(void)
    {
        int distancia;

        printf("Digite a distancia do robo ate a cesta, em centimetros: ");
        scanf("%d", &distancia);

        if (distancia < 0 || distancia > 2000) {
            printf("Distancia invalida.\n");
        } else if (distancia <= 800) {
            printf("1\n");
        } else if (distancia <= 1400) {
            printf("2\n");
        } else {
            printf("3\n");
        }

        return 0;
    }
    */

    // Exercicio 4;
    /*
    #include <stdio.h>

    int main(void)
    {
        int valor;
        int cedulas100, cedulas50, cedulas20, cedulas10;
        int cedulas5, cedulas2, cedulas1;

        printf("Digite o valor inteiro em reais: R$ ");
        scanf("%d", &valor);

        if (valor < 0) {
            printf("Valor invalido.\n");
            return 1;
        }

        cedulas100 = valor / 100;
        valor %= 100;

        cedulas50 = valor / 50;
        valor %= 50;

        cedulas20 = valor / 20;
        valor %= 20;

        cedulas10 = valor / 10;
        valor %= 10;

        cedulas5 = valor / 5;
        valor %= 5;

        cedulas2 = valor / 2;
        valor %= 2;

        cedulas1 = valor;

        printf("Cedulas de R$ 100: %d\n", cedulas100);
        printf("Cedulas de R$  50: %d\n", cedulas50);
        printf("Cedulas de R$  20: %d\n", cedulas20);
        printf("Cedulas de R$  10: %d\n", cedulas10);
        printf("Cedulas de R$   5: %d\n", cedulas5);
        printf("Cedulas de R$   2: %d\n", cedulas2);
        printf("Cedulas de R$   1: %d\n", cedulas1);

        return 0;
    }
    */

    // Exercicio 5;
    /*
    #include <stdio.h>

    int main(void)
    {
        double lado1, lado2, lado3;

        printf("Digite os tres comprimentos: ");
        scanf("%lf %lf %lf", &lado1, &lado2, &lado3);

        if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
            lado1 >= lado2 + lado3 ||
            lado2 >= lado1 + lado3 ||
            lado3 >= lado1 + lado2) {
            printf("Os valores nao formam um triangulo.\n");
        } else if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }

        return 0;
    }
    */

    // Exercicio 6 - opcional;
    /*
    #include <stdio.h>

    int main(void)
    {
        int conta, invertido, soma;
        int centena, dezena, unidade;
        int resultado, digitoVerificador;

        printf("Digite o numero da conta com tres digitos: ");
        scanf("%d", &conta);

        if (conta < 0 || conta > 999) {
            printf("Numero de conta invalido.\n");
            return 1;
        }

        centena = conta / 100;
        dezena = (conta / 10) % 10;
        unidade = conta % 10;

        invertido = unidade * 100 + dezena * 10 + centena;
        soma = (conta + invertido) % 1000;

        centena = soma / 100;
        dezena = (soma / 10) % 10;
        unidade = soma % 10;

        resultado = centena * 1 + dezena * 2 + unidade * 3;
        digitoVerificador = resultado % 10;

        printf("Digito verificador: %d\n", digitoVerificador);
        */


return 0;
}


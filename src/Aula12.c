#include <stdio.h>
//Lista
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
//Exercicio 1;

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










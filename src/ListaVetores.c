#include <stdio.h>
#define N 100
// Sem vetor:
/*
int main() {
  int i = 0, nUsr, total = 0, copos, latas;
  scanf("%d", &nUsr);

  for (i = 0; i < nUsr; i++) {
    scanf("%d %d", &latas, &copos);
    if (latas > copos)
      total += copos;
  }
  printf("%d\n", total);

  return 0;

}*/
// Com vetor
/*
int main() {
  int i = 0, nUsr, total = 0, copos[N], latas[N];
  scanf("%d", &nUsr);
  for (i = 0; i < nUsr; i++)
    scanf("%d %d", &latas[i], &copos[i]);
  for (i = 0; i < nUsr; i++) {
    if (latas[i] > copos[i]) {
      total += copos[i];
    }
  }
  printf("%d\n", total);

  return 0;
}
*/

// Sem vetor
/*
int main(){

  int interr, i= 0, lampa = 0, lampb = 0, nusr;
  scanf("%d", &nusr);
  for (i = 0; i < nusr; i++){
    scanf("%d", &interr);
    if(interr == 1)
      lampa = 1 - lampa;
    else{
      lampa = 1 - lampa;
      lampb = 1 - lampb;
  }
  }


  return 0;
}*/
// Com vetor
/*
int main() {
    int i, nusr, lampa = 0, lampb = 0, interr[N];
    scanf("%d", &nusr);

    for (i = 0; i < nusr; i++) {
        scanf("%d", &interr[i]);
    }

    for (i = 0; i < nusr; i++) {
        if (interr[i] == 1) {
            lampa = 1 - lampa;
        } else if (interr[i] == 2) {
            lampa = 1 - lampa;
            lampb = 1 - lampb;
        }
    }

    printf("%d %d\n", lampa, lampb);


    return 0;
}*/

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

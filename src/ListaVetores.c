#include <stdio.h>
#define N 100
// Sem vetor:

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
}

/*#include <stdio.h>
#define N_l 3
#define N_c 3
void preencheMatriz(int mat[][3], int l, int c);

int main() {
  int matriz[N_l][N_c];
  preencheMatriz(matriz, N_l, N_c);
  return 0;
}
void preencheMatriz(int mat[][N_c], int l, int c) {
  for (int i = 0; i < l; ++i) {
    for (int j = 0; j < c; ++j) {
      mat[i][j] = i * j;
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
*/


#include <stdio.h>
int somaLeC(int* matriz[][3], int linha, int coluna);

int main(){
  int linhas = 3, colunas = 3;
  int** matrziz = (**int)malloc(linhas * sizeof(*int));



  free(matriz);
  return 0;
}

int somaLeC(int** matriz, int n_linha, int n_coluna){
  int i, j, result;
  for(i = 0; i < n_linha; i++){
    result += matriz[i][j];
  }
  
  
  
  for(i = 0; i < n_linha; ++i){
    for(j = 0; j < n_coluna; ++j){

    }

  }


return result;
}
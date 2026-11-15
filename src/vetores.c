#include <stdio.h>
void iniciaVetor(int *vetor, int n);


int main(){
	int* v;

	printf("%d,", &(v+2));
	return 0;

}
void iniciaVetor(int *vetor, int n){
	for (int i = 0; i < n; i++){
		vetor[i] = i;
	}
}


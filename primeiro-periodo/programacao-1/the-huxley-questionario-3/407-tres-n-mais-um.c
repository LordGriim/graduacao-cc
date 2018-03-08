#include <stdio.h>

void troca(int *n1, int *n2);
int calc_ciclos(int n);
int maior_ciclo(int ini, int fim, int maior);
void leitura();

int main(void) {
	int i, j;
	leitura();	
	return 0;
}

void troca(int *n1, int *n2) {
	int aux;
	if(*n1 > *n2) {
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}
}

int calc_ciclos(int n) {
	if(n == 1)
		return 1;
	return 1 + calc_ciclos(((n % 2 == 0) ? (n = n / 2) : (n = (3 * n + 1))));
}

int maior_ciclo(int ini, int fim, int maior) {
	if(ini > fim)
		return maior;
	int qtd_c = calc_ciclos(ini);
	maior = (maior < qtd_c ? qtd_c : maior);
	return maior_ciclo(ini+1, fim, maior);
}

void leitura() {
	int i, j, inicio, fim;
	if(scanf("%d %d", &i, &j) != EOF) {
		inicio = i;
		fim = j;
		troca(&inicio, &fim);
		printf("%d %d %d\n", i, j, maior_ciclo(inicio, fim, 0));
		leitura();
	}
}
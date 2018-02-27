#include <stdio.h>
/*
 * 7 - Ler um número real e mostrar seu valor arredondado por excesso tal como faz a função ceil()
 * da math.h, mas sem utilizá-la.
 */

int main(void) {
	int aux;
	float num;
	scanf("%f", &num);
	aux = num; // pega o vlaor inteiro
	aux = num > aux ? num + 1 : num; // se num for maior que aux é pq tem valor nas casas decimais de num, então aumenta em 1 o valor deste
	printf("%d\n", aux);// exibe o valor arredondado
	return 0;
}
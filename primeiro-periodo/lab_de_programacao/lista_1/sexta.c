#include <stdio.h>
/*
 * 6 - Ler um número real e mostrar seu valor arredondado para o inteiro mais próximo tal como faz a 
 * função round() da math.h, mas sem utilizá-la.
 */
int main(void) {
	float num;
	int aux;
	scanf("%f", &num);
	aux = num; // converte pra inteiro
	aux = (num - aux >= 0.5 ? num+1 : num); // verifica se o valor é maior igual a 0.5, sendo arredonda pra cima, caso não, pra baixo
	printf("%d\n", aux);
	return 0;
}
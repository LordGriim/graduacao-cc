#include <stdio.h>
/*
 * 5 - Ler um número real e mostrar seu valor absoluto, sem usar funções predefinidas
 */
int main(void) {
	int num;
	scanf("%d", &num);
	/*
	 * o valor absoluto de um numero eh, para os negativos, seu oposto postivo, 
	 * para valores maior ou igual a 0: o próprio número
	 */
	printf("o valor absoluto de %d eh: %d\n", num, num >= 0 ? num : -num);
	return 0;
}
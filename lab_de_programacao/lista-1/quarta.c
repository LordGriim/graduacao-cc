#include <stdio.h>
/*
 *  4 - Ler dois números inteiros, a e b, e mostrar o resto da divisão inteira de a por b, 
 *  sem uso do operador predefinido.
 */
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b); // lê os valores das variáveis
	printf("%d\n", a - (b*(a/b))); // o resto de uma divisão é a subtração do dividendo(a) pela multiplicação do divisor(b) pelo quociente (a/b)
	return 0;
}
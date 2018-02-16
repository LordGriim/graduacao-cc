#include <stdio.h>

int main(void) {
	int n=-1; // inicia 'n' com um valor negativo para entrarn no loop da linha 7
	float n1, n2, n3, aux;
	// até n ser positivo repete a leitura
	while(n < 0) scanf("%d", &n);
	// enquanto os 'n' casos não chegarem a zero repete e decrementa em 1
	while(n-- > 0){
		// le os valores
		scanf("%f %f %f", &n1, &n2, &n3);
		// caso sejam os tres diferentes ordena os valores e mostra a mensagem pré-definida
		if(n1 != n2 && n1 != n3 && n2 != n3) {
			if(n1 > n2 && n1 > n3) {
				aux = n1;
				n1 = n3;
				n3 = aux;
			} else if(n2 > n3) {
				aux = n2;
				n2 = n3;
				n3 = aux;
			}
			if(n1 > n2) {
				aux = n1;
				n1 = n2;
				n2 = aux;
			}
			printf("os tres sao diferentes\no numero do meio eh: %.2f\n", n2);
		} else if(n1 == n2 && n2 == n3) {
			// caso os tres sejam iguais exibe a msg pré-definida
			printf("os tres lados sao iguais\n");
		} else {
			// se os três números não são diferentes nem os três iguais, dois são iguais e um é diferente
			printf("apenas dois deles sao iguais\n");
		}
	}
	return 0;
}
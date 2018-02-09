#include <stdio.h>

int main(void){ 
	int qtd, i, sorteado, cont = 1;
	scanf("%d", &qtd);
	while(qtd > 0) {
		int ingresso;
		for(i = 0; i < qtd; i++) {
			scanf("%d", &ingresso);
			if(i+1 == ingresso){
				sorteado = ingresso;
			}
		}

		printf("Teste %d\n%d\n", cont, sorteado);
		printf("\n");
		cont++;
		scanf("%d", &qtd);
	}
	return 0;
}
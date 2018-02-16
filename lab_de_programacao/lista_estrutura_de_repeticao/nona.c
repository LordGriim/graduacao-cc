#include <stdio.h>
#include <unistd.h>
int main(void) {
	int op, saque = 0, soma_saque = 0;
	printf("[ 1 ] Saque\n[ 2 ] Encerrar\n");
	scanf("%d", &op);
	while(op != 2) {
		printf("\e[1;1H\e[2J");	
		scanf("%d", &saque);
		if(saque >= 10 && saque <= 600){
			soma_saque += saque;
			printf("NOTAS de R$ 100,00: %d\n", saque/100);
			saque %= 100;
			printf("NOTAS de R$ 50,00: %d\n", saque/50);
			saque %= 50;
			printf("NOTAS de R$ 10,00: %d\n", saque/10);
			saque %= 10;
			printf("NOTAS de R$ 5,00: %d\n", saque/5);
			saque %= 5;
			printf("NOTA de R$ 1,00: %d\n", saque);
		} else {
			printf("valor invalido! (min 10, max 600\n");
		}
		sleep(1);
		printf("\e[1;1H\e[2J");	
		printf("[ 1 ] Saque\n[ 2 ] Encerrar\n");
		scanf("%d", &op);
	}
	printf("Foram sacados R$ %d,00\n", soma_saque);
	return 0;
}
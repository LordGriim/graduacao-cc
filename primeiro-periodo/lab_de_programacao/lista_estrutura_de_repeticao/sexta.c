#include <stdio.h>
#include <ctype.h>

int main(void) {
	char esc;
	int op;
	do {
		printf("[ M ] Mamifero\n[ A ] Aves\n[ R ] Repteis\n[ E ] Encerrar\n=>");
		scanf(" %c", &esc);
		esc = tolower(esc);
		if(esc == 'm') {
			printf("[ B ] Bipede\n[ Q ] Quadrupede\n[ V ] Voadores\n[ A ] Aquatico\n=>");
			scanf(" %c", &esc);
			esc = tolower(esc);
			switch(esc) {
				case 'b':
				printf("Homem\n");
				break;
				case 'q':
				printf("Leao\n");
				break;
				case 'v':
				printf("Morcego\n");
				break;
				case 'a':
				printf("Baleia\n");
			}
		} else if(esc == 'a') {
			printf("[ 1 ] Nao voadores\n[ 2 ] Nadadores\n[ 3 ] De rapina\n=>");
			scanf(" %c", &esc);
			esc = tolower(esc);
			switch(esc) {
				case '1':
				printf("Avestruz\n");
				break;
				case '2':
				printf("Pato\n");
				break;
				case '3':
				printf("Aguia\n");
				break;
			}
		} else if(esc == 'r') {
			printf("[ 1 ] Com casco\n[ 2 ] Carnivoros\n[ 3 ] Sem patas\n=>");
			scanf(" %c", &esc);
			esc = tolower(esc);
			switch(esc) {
				case '1':
				printf("Tartaruga\n");
				break;
				case '2':
				printf("Crocodilo\n");
				break;
				case '3':
				printf("Cobra\n");
				break;
			}
		}
	} while(esc != 'e');
	return 0;
}
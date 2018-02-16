#include <stdio.h>
#include <ctype.h>

int main(void) {
	char sinal;
	float v1, v2;
	int dividendo, divisor;
	do{
		scanf(" %c %f %f", &sinal, &v1, &v2);
		sinal = tolower(sinal);
		switch(sinal) {
			case 'x':break;
			case '+':
			printf("%.2f\n", v1+v2);
			break;
			case '-':
			printf("%.2f\n", v1-v2);
			break;
			case '*':
			printf("%.2f\n", v1*v2);
			break;
			case '/':
			if(v2 == 0) {
				printf("impossivel dividir\n");
			} else {
				dividendo = v1;
				divisor = v2;
				if(v1 == dividendo && divisor == v2) {
					printf("%d / %d = %d com %d de resto\n", dividendo, divisor, dividendo/divisor, dividendo%divisor);
				} else {
					printf("%.2f\n", v1/v2);
				}
			}
			break;
			default:
			printf("Operador invalido!\n");
		}
	}while(sinal != 'x' && v1 != 0 && v2 != 0);
	return 0;
}
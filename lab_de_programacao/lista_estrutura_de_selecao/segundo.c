#include <stdio.h>

int main(void) {
	int l;
	scanf("%d", &l);
	switch(l) {
		case 3:
		printf("triagulo equilatero\n");
		break;
		case 4:
		printf("quadrado\n");
		break;
		case 5:
		printf("pentagono\n");
		break;
		case 6:
		printf("hexagono\n");
		break;
		case 7:
		printf("heptagono\n");
		break;
		case 8:
		printf("octogono\n");
		break;
		case 9:
		printf("eneagono\n");
		break;
		case 10:
		printf("decagono\n");
		break;
		default:
		printf("Digite inteiros de 3 a 10\n");
	}
	
	return 0;
}
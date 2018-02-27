#include <stdio.h>
#include <string.h>

int ContaDigitosPares(char *num) {
	int i, cont = 0;
	for(i = 0; i < strlen(num); i++){
		switch(num[i]){
			case '0':
			case '2':
			case '4':
			case '6':
			case '8':
				cont++;
				break;
		}
	}
	return cont;
}

int main(void) {
	char num[10000];
	scanf("%s", num);
	printf("%d\n", ContaDigitosPares(num));
}
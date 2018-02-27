#include <stdio.h>

int main(void) {
	int a, maior;
	scanf("%d", &a);
	maior = a;
	while(a != 0){
		scanf("%d", &a)
		if(maior < a){
			maior = a;
		}
	}
	printf("%d\n", maior);

	return 0;
}
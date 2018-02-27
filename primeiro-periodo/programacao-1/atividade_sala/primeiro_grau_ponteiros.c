#include <stdio.h>

void primeiro_grau(int x, int *fx, int *gx) {
	*fx = (2 * x) + 7;
	*gx = (9 * x) + 13;
}

int main(void) {
	
	int fx, gx;
	
	primeiro_grau(0, &fx, &gx);
	printf("f(%d) = %d\ng(%d) = %d\n", 0, fx, 0, gx);
	
	primeiro_grau(5, &fx, &gx);
	printf("f(%d) = %d\ng(%d) = %d\n", 1, fx, 1, gx);
	
	return 0;
}
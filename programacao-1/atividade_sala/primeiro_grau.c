#include <stdio.h>

void primeiro_grau(int x) {
	return ((2*x)+7);
}

int main(void) {
	printf("f(%d) = %d\n", primeiro_grau(0));
	printf("f(%d) = %d\n",primeiro_grau(1));
	printf("f(%d) = %d\n",primeiro_grau(2));
	printf("f(%d) = %d\n",primeiro_grau(3));
	printf("f(%d) = %d\n",primeiro_grau(5));
	return 0;
}
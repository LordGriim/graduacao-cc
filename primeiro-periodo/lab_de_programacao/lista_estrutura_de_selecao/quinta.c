#include <stdio.h>

int main(void) {
	float x;
	scanf("%f", &x);
	if(x <= 1){
		printf("f(x) = 1\n");
	} else if(x <= 2){
		printf("f(x) = 2\n");
	} else if(x <= 5) {
		printf("f(x) = x^2\n");
	} else {
		printf("f(x) = x^3\n");
	}
	return 0;
}
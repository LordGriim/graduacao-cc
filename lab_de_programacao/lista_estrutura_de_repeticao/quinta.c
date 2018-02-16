#include <stdio.h>

int main(void) {
	float x = -0.5;
	while(x <= 6) {
		if(x <= 1){
			printf("f(x) = 1\n");
		} else if(x <= 2){
			printf("f(x) = 2\n");
		} else if(x <= 5) {
			printf("f(x) = x^2\n");
		} else {
			printf("f(x) = x^3\n");
		}
		x += 0.5;
	}
	return 0;
}
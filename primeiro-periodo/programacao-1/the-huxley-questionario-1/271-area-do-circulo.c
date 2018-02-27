#include <stdio.h>

double area(double raio) {
    return 3.14159*raio*raio;
}

int main (void){
	double raio;
	scanf("%lf", &raio);
	raio = raio / 100;
	printf("Area = %.4lf\n", area(raio));
	return 0;
}


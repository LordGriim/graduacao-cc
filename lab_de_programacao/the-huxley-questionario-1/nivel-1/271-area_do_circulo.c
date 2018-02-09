#include <stdio.h>
int main (void){
	double raio, area;
	scanf("%lf", &raio);
	raio = raio / 100;
	area = 3.14159*raio*raio;
	printf("Area = %.4lf\n", area);
	return 0;
}

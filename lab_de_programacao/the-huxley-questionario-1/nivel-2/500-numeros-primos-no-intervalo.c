#include <stdio.h>
#include <math.h>

int e_primo(int num) {
	int i;
	if(num < 2)
		return 0;
	if(num == 2)
		return 1;
	if(num % 2 == 0) 
		return 0;
	for(i = 3; i <= sqrt(num); i+=2)
		if(num % i == 0)
			return 0;
	return 1;		
}

int main(void) {
	int n1, n2, i, aux;
	scanf("%d %d", &n1, &n2);
	if(n1 > n2) {
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	for(i = n2; i >= n1; i--) {
		if(e_primo(i))
			printf("%d\n", i);
	}
	return 0;
}
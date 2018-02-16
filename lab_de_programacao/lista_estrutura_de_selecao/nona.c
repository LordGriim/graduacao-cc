#include <stdio.h>
#include <ctype.h>

int main(void) {
	float temp;
	char esc;
	scanf("%f %c", &temp, &esc);
	if(toupper(esc) == 'C') {
		printf("%.2f F\n", (temp-32)/1.8);
	} else if(toupper(esc) == 'F') {
		printf("%.2f F\n", (temp * 1.8) + 32);
	}
	return 0;
}
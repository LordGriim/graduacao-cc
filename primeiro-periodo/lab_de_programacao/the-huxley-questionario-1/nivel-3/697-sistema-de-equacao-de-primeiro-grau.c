#include <stdio.h>

int main(void) {
	float a,b,c,d,e,f;
	scanf("%fx + %fy = %f %fx + %fy = %f", &a, &b, &c, &d, &e, &f);
	printf("%.2f\n%.2f\n", (f - (e*(c/b)))/(d - (e*(a/b))), (c/b) - ((a/b)*(f - (e*(c/b)))/(d - (e*(a/b)))));
	return 0;
}
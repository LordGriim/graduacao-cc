#include <stdio.h>
#include <math.h>

int main(void) {
	int x1, x2, y1, y2;	
	double r;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	r = 1.0 * sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	printf("%.4lf\n", r);
	return 0;
}
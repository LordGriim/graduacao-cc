#include <stdio.h>
int main(void) {
	int a, b, c, h, l;
	scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
	if( (h > a && l > b) || (h > b && l > a) || (h > a && l > c)||
	    (h > c && l > a) || (h > b && l > c) || (h > c && l > b) )
		printf("S\n");
	else printf("N\n");
	return 0;
}
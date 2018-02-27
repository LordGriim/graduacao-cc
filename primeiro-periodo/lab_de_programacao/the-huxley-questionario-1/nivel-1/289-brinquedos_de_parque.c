#include <stdio.h>

int main(void) {
	int h, i, q=0;
	scanf("%d %d", &h, &i);
	if(h >= 170 || i >= 16)
		q++;
	if(h >= 140 && i >= 14)
		q++
	if(h >= 150 && i >= 12)
		q++;
	printf("%d\n", q);
	return 0;
}
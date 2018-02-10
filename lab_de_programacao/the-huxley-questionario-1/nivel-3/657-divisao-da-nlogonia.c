#include <stdio.h>

int main(void) {
	int k, x, y, xr, yr;
	char px, py;
	scanf("%d", &k);
	while(k != 0) {
		scanf("%d %d", &x, &y);
		while(k-- > 0) {
			scanf("%d %d", &xr, &yr);
			if(xr == x || yr == y) {
				printf("divisa\n");
			} else {
				if(xr > x) {
					px = 'E';
				} else {
					px = 'O';
				}
				if(yr > y) {
					py = 'N';
				} else {
					py = 'S';
				}
				printf("%c%c\n", py, px);
			}
		}
		scanf("%d",  &k);
	}
	return 0;
}
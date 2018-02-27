#include <stdio.h>

int main(void) {
	int h, l, p, ix, iy, fx, fy, i, j;
	scanf("%d %d %d %d %d %d %d", &h, &l, &p, &ix, &iy, &fx, &fy);
	for(i = 0; i <= h; i++){
		for(j = 0; j <= l; j++){
			if((i == iy || i == fy) && (j>= ix && j <= fx)){
				printf("*");
			} else if((i < iy && i > fy) && (j >= ix && j <= fx)){
				if((j == ix || j == fx) || p == 1){
					printf("*");
				} else {
					printf(".");
				}
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
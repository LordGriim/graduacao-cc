#include <stdio.h>
#include <math.h>

int main(void) {
	float d, vf, vg;
	int captura, i = 1;
	scanf("%f %f %f", &d, &vf, &vg);
	while((d != -1 && vf != -1 && vg != -1)){
		if((sqrt((d*d) + 144)/vg) <= (12/vf)){ 
			printf("S\n");
		} else {
			printf("N\n");
		}
		scanf("%f %f %f", &d, &vf, &vg);
	}
	return 0;
}
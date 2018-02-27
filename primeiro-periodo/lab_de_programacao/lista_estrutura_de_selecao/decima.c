#include <stdio.h>

int main(void) {
	float ab1, ab2, reav;
	scanf("%f %f", &ab1, &ab2);
	if(ab1 < 7 || ab2 < 7) {
		scanf("%f", &reav);
		if(ab1 < ab2 && ab1 < reav){
			ab1 = reav;
		} else if(ab2 < ab1 && ab2 < reav) {
			ab2 = reav;
		}
	}
	if((ab1 + ab2)/2.0 < 5) {
		printf("REPROVADO!\n");
	} else if((ab1 + ab2) / 2 >= 7) {
		printf("APROVADO!\n");
	} else {
		printf("FARA A FINAL!\n");
	}
	return 0;
}
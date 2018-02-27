#include <stdio.h>

int main(void) {
	int dd, mm, aa;
	scanf("%d %d %d", &dd, &mm, &aa);
	
	if(aa > 2018 || mm < 1 || mm > 12 || dd < 1 || dd > 31) {
		printf("data invalida!\n");
	}  else {
		if(mm == 2) {
			if(aa % 4 == 0){
				if(aa % 100 == 0){
					if(aa % 400 == 0) {
						if(dd <= 29) {
							printf("data valida\n");
						} else {
							printf("data invalida\n");
						}
					} else {
						if(dd <= 28) {
							printf("data valida\n");
						} else {
							printf("data invalida\n");
						}
					}
				} else {
					if(dd <= 29) {
						printf("data valida\n");
					} else {
						printf("data invalida\n");
					}
				}
			} else {
				if(dd <= 28) {
					printf("data valida\n");
				} else {
					printf("data invalida\n");
				}
			}
		} else {
			printf("data valida\n");
		}
	}
	return 0;
}
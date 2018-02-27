#include <stdio.h> 

int main(void) {
	int n, i;
	do {
		scanf("%d", &n);
		i = 1;
		while(n-- > 0) {
			n == 0 ? printf("%d\n", i) : printf("%d, ", i);
			i = (i * 2) + 1;
		}
		printf("deseja digitar outro numero:\n[ 1 ] sim\n[ 0 ] nao\n=> e'");
		scanf("%d", &n);
	}while(n!= 0);
	return 0;
}
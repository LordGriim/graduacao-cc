#include <stdio.h>

typedef struct ponto {
	int x, y;
}ponto;

void intersecao(ponto a, ponto b, ponto *ia, ponto *ib) {
	if(a.x > (*ia).x) {
		(*ia).x = a.x;
	}
	if(a.y < (*ia).y) {
		(*ia).y = a.y;
	}
	if(b.x < (*ib).x) {
		(*ib).x = b.x;
	}
	if(b.y > (*ib).y) {
		(*ib).y = b.y;
	}
}

int main(void) {

	int i, n, cont=0;
	ponto a, b, ia, ib;
	scanf("%d", &n);
	while(n != 0) {	
		i=0;
		if (n == 1) {
			scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
			printf("Teste %d\n", ++cont);
			printf("nenhum\n\n");
		} else {
			while(n-- > 0){
				scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
				if(i == 0) {
					i = 1;
					ia.x = a.x;
					ia.y = a.y;
					ib.x = b.x;
					ib.y = b.y;
				} else {
					intersecao(a, b, &ia, &ib);
				}
			}
			printf("Teste %d\n", ++cont);
			if((ib.x < ia.x) || (ia.y < ib.y)){
				printf("nenhum\n\n");
			} else {
				printf("%d %d %d %d\n\n", ia.x, ia.y, ib.x, ib.y);
			}
		}
		scanf("%d", &n);
	}

	return 0;
}
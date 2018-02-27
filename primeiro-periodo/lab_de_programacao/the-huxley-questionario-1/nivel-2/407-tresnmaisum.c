#include <stdio.h>

int calc_ciclos(int n) {
	int q = 1;
	while(n != 1){
		(n % 2 == 0) ? (n = n / 2) : (n = (3 * n + 1));
		q++;
	}
	return q;
}

int main(void) {
	int q_ciclo, i, j, aux, aux2, iAux, jAux;
	while(scanf("%d %d", &i, &j) != EOF){
		q_ciclo = 0;
		iAux = i;
		jAux = j;
		if(i > j){
			aux2 = i;
			i = j;
			j = aux2;
		}
		for(aux = i; aux <= j; aux++){

			if(aux == i){
				q_ciclo = calc_ciclos(aux);
			} else {
				aux2 = calc_ciclos(aux);
				if(aux2 > q_ciclo)
					q_ciclo = aux2;
			}
		}
		printf("%d %d %d\n", iAux, jAux, q_ciclo);
	}
	return 0;
}
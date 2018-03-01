#include <stdio.h>

// calcula a pontução recebendo as 3 cartas
int pontuacao(int c1, int c2, int c3) {
	int pontos = 0, aux;

	// ordena os três valores
	if(c1 > c2 && c1 > c3) {
		aux = c1;
		c1 = c3;
		c3 = aux;
	} else if(c2 > c3) {
		aux = c2;
		c2 = c3;
		c3 = aux;
	}
	if(c1 > c2) {
		aux = c1;
		c1 = c2;
		c2 = aux;
	}
	
	// calcula os pontos
	if(c1+1 == c2 && c2+1 == c3) {
		pontos += c1;
	}
	if(c1 == c2 && c2 == c3) {
		pontos += c1;
	}
	if((c1 == c2 && c2 < c3)) {
		pontos +=  (c1/2);
	}
	if((c2 == c3 && c2 > c1)) {
		pontos += (c3/2);
	}
	if((c1 + c2 + c3) == 8) {
		pontos += 8;
	}

	return pontos;
}

int main(void) {
	int c1, c2, c3, pontos_paes, pontos_willy;
	// lê as cartas do paes
	scanf("%d %d %d", &c1, &c2, &c3);
	// calcula a pontuação do paes
	pontos_paes = pontuacao(c1, c2, c3);
	
	// lê as cartas do Willy
	scanf("%d %d %d", &c1, &c2, &c3);
	// calcula a pontuação do willy
	pontos_willy = pontuacao(c1, c2, c3);
	
	/*
	 * compara as pontuações e determina:
	 * 0 -> empate
	 * 1 -> vitória do Paes
	 * 2 -> vitória do Willy
	 */
	printf("%d\n", (pontos_willy == pontos_paes ? 0 : pontos_willy > pontos_paes ? 2 : 1));
	return 0;
}
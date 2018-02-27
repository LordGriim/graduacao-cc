#include <stdio.h>

// imprime a base inferior e superior da ampulheta (são iguais)
void imprime_base(int largura) {
	int i;
	printf("*");
	for(i = 0; i < (largura/2)+2; i++){
		i+1 == (largura/2) + 2 ? printf("**\n") : printf("* ");
	}
}

int calc_espaco(int l) {
	return l == 1 ? 0 : 1+((l-2)*2); // calcula a quantidade interna de espaços de cada nivel da ampulheta a partir do padrão mostrado na questão
}

void imprime_caracteres(int qtd, char c) {
	if(qtd > 0){
		printf("%c", c); // imprime um caracter 'qtd' vezes usando recursão para fazê-lo
		imprime_caracteres(qtd-1, c);
	}
}

void imprime_superior(int nivel, int nivel_maximo, int nivel_superior) {
	int qtd_esp = (nivel_maximo-nivel);// determina a quantidade de espaços entre a reta da base e o primeiro * da 
	char c = (nivel-1 <= nivel_superior ? '.' : ' ');// faz o calculo para determinar o caracter que será printado dentro da ampulheta
	if(nivel > 1) {// se o nivel for maior que um será printado a linha com 4 asteriscos
		printf("*"); // primeiro asterisco da base da ampulheta
		imprime_caracteres(qtd_esp, ' '); // espaços entre o asterisco da base e o primeiro da ampulheta
		printf("*"); // primeiro asterisco da ampulheta
		imprime_caracteres(calc_espaco(nivel), c); // caracteres internos
		printf("*"); // fim da ampulheta
		imprime_caracteres(qtd_esp, ' '); // espaços entre o ultimo asterisco da ampulheta e o ultimo da base
		printf("*\n"); // asterisco da base
		imprime_superior(nivel-1, nivel_maximo, nivel_superior);
	} else {
		printf("*"); // asterisco da base
		imprime_caracteres(qtd_esp, ' '); // espaços entre o asterisco da base e o do centro
		printf("*"); // asterisco do centro
		imprime_caracteres(qtd_esp, ' ');// espaços entre o asterisco do centro e o ultimo da base
		printf("*\n"); // ultimo asterisco da base
	}
}

void imprime_inferior(int nivel_maximo, int nivel, int nivel_inf) {
	int qtd_esp = (nivel_maximo-nivel); // determina a quantidade de espaços entre a reta da base e o primeiro * da ampulheta
	char c = (nivel >= (nivel_maximo - nivel_inf) ? '.' : ' '); // faz o calculo para determinar o caracter que será printado dentro da ampulheta
	if(nivel == nivel_maximo) { // se isso acontecer é pq está no ultimo nivel, que é a base de baixo, então, ao chegar nela, não se faz necessario continuar essa função
		return;
	}
	if(nivel > 1) { // se o nivel for maior que um será printado a linha com 4 asteriscos
		printf("*");// o primeiro asterisco
		imprime_caracteres(qtd_esp, ' '); // imprime os espaços entre a reta da base e da ampulheta
		printf("*");// o asterisco depois dos espaços (o primeiro da ampulheta)
		imprime_caracteres(calc_espaco(nivel), c); // o caracter definido previamente na linha 45
		printf("*"); // o ultimo asterisco da ampulheta
		imprime_caracteres(qtd_esp, ' '); // os espaços entre a ampulheta e a base
		printf("*\n"); // o ultimo asterisco da base
	} else {
		printf("*");// primeiro asterisco do nivel 1
		imprime_caracteres(qtd_esp, ' ');// os espaços entre o primeiro asterisco e o do meio
		printf("*"); // asterisco do meio
		imprime_caracteres(qtd_esp, ' ');// os espaços entre o asterisco do meio e o do ultimo
		printf("*\n"); // ultimo asterisco do nivel 1
	}
	imprime_inferior(nivel_maximo, nivel+1, nivel_inf); // recursão pra printar toda a piramide de baixo da ampulheta
}
int main(void) {

	int nivel_inf, lado, esp, qtd, i=1;
	scanf("%d", &qtd); // lê a quantidade
	while(qtd-- > 0){ // repete 'qtd' vezes
		scanf("%d %d", &lado, &nivel_inf); // lê os dados da ampulheta
		esp = calc_espaco(lado); // calcula a quantidade espaços internos
		printf("Caso %d:\n", i++); // imprime qual caso de teste está
		imprime_base(esp); // imprime a base superior da ampulheta
		imprime_superior(lado-1, lado, (lado - nivel_inf - 2)); //imprime a parte superior da ampulheta
		imprime_inferior(lado, 1, nivel_inf); // imprime a parte inferior da ampulheta
		imprime_base(esp); // imprime a base inferior da ampulheta
	}
	return 0;
}
#include <stdio.h>
/*
 * 12 - Ler um horário no formato hh.mm e escrever "hh horas e mm minutos" somente se: "hh estiver na 
 * faixa de 0 a 23 e mm pertencer à faixa de 0 a 59.
 */
int main(void) {
	float horario;
	int hh, mm;
	scanf("%f", &horario); // le o horario
	hh = horario; // pega o valor das horas
	mm = (horario - hh) *100; // pega o valor dos minutos
	((hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59)) ? printf("%d horas e %d minutos\n", hh, mm) : printf("entrada invalida\n"); // verifica a entrada para determinar o que será exibido
	return 0;
}
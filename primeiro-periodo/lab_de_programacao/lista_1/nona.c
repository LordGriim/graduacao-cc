#include <stdio.h>
/* 
 * Ler um horário no formato hh.mm e escrever "hh horas e mm minutos" (admitindo-se que a hora é 
 * válida e não há erros de digitação)
 */
int main(void) {
	float horario;
	int hh, mm;
	scanf("%f", &horario); // lê o horário no formato definido no enunciado
	hh = horario; // captura o valor das horas
	mm = (horario - hh) * 100; // calcula o valor dos minutos
	printf("%d horas e %d minutos\n", hh, mm); // exibe
	return 0;
}
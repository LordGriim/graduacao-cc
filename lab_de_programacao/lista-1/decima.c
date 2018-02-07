#include <stdio.h>
/*
 * 10 - Ler a nota final de um aluno e escrever: "Aprovado", se sua nota for maior ou igual a 5.5; 
 * "Reprovado", se sua nota for menor que 5.5
 */
int main(void) {
	float nota;
	scanf("%f", &nota);
	nota < 5.5 ? printf("Reprovado\n") : printf("Aprovado\n"); // verifica a condição do aluno a partir de sua nota
	return 0;
}
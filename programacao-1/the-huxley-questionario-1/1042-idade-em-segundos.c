#include <stdio.h>
int idade_em_segundos(int idade) {
    return idade * (60*60*24*365);
}
int main(void) {
	int idade;
	scanf("%d", &idade);
	printf("%d\n", idade_em_segundos(idade));
	return 0;
}

#include <stdio.h>
/*
 * 13 - Ler três números reais e escrever um dos códigos numéricos (1, 2 ou 3):  1, se os números lidos 
 * são todos diferentes; 2, se apenas dois números são iguais;  3, se os três números são iguais;
 */
int main(void) {
     // variáveis que vão salvar os 3 valores
     float a, b, c;

     // leitura das variáveis
     scanf("%f %f %f", &a, &b, &c);

     /* exibe um valor inteiro anteriormente definido pela questão fazendo uso da operação ternaria para definir o valor do código de saída, sendo estes:
      * 1: se todos os valores são diferentes
      * 2: se dois valores são iguais e um diferente
      * 3: se todos os valores são iguais
      */
     printf("%d\n", (a == b && c == b) ? 3 : (a!=b && a!=c && c!=b) ? 1 : 2);

     return 0;

}
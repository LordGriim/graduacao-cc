#include <stdio.h>

int main(void) {
	float preco_compra;
	scanf("%f", &preco_compra);
	if(preco_compra < 20) {
		printf("Preco de venda: R$ %.2f\n45%% de lucro\nLucro: R$ %.2f\n", preco_compra + (preco_compra*0.45), preco_compra*0.45);
	} else {
		printf("Preco de venda: R$ %.2f\n30%% de lucro\nLucro: R$ %.2f\n", preco_compra + (preco_compra*0.3), preco_compra*0.3);
	}
	return 0;
}
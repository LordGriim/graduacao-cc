#include <stdio.h>

typedef struct jogo{
    float preco;
    int dificuldade;
}_jogo;

void calculaValor(_jogo jogo, int pos);

int main(void) {

    int n, i;
    scanf("%d", &n);
    _jogo *jogos = (_jogo *) malloc(sizeof(_jogo) * n);
    for(i = 0; i < n; i++){
        scanf("%d %f", &jogos[i].dificuldade, &jogos[i].preco);
        calculaValor(jogos[i], i);
    }
    return 0;
}

void calculaValor(_jogo jogo, int pos) {
    int i;
    float porcentagemN, porcentagemB;
    switch(jogo.dificuldade){
        case 0:
            porcentagemN = 0.25;
            porcentagemB = 0.125;
            break;
        case 1:
            porcentagemN = 0.20;
            porcentagemB = 0.10;
            break;
        case 2:
            porcentagemN = 0.18;
            porcentagemB = 0.09;
            break;
        case 3:
            porcentagemN = 0.15;
            porcentagemB = 0.075;
            break;
        case 4:
            porcentagemN = 0.12;
            porcentagemB = 0.06;
            break;
        case 5:
            porcentagemN = 0.10;
            porcentagemB = 0.05;
            break;
    }
    for(i = 0; i < 3; i++){
        if(jogo.preco > 45){
            if(jogo.preco > 100){
                jogo.preco = jogo.preco -  (jogo.preco * porcentagemN);
            } else if(jogo.preco > 45){
                jogo.preco = jogo.preco - (jogo.preco * porcentagemB);
            }
            if(jogo.preco < 45) {
                jogo.preco = 45;
            }
        }
    }
    printf("Jogo[%d] = R$%.2f\n", pos, jogo.preco);
}
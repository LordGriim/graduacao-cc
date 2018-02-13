#include <stdio.h>

void salario(int num, int horas_trab, float valor_por_hora) {
    printf("NUMBER = %d\nSALARY = R$ %.2f\n", num, horas_trab * valor_por_hora);
}

int main() {

    int num, horas_trab;
    float valor_por_hora;
    scanf("%d %d %f", &num, &horas_trab, &valor_por_hora);
    salario(num, horas_trab, valor_por_hora);
    return 0;
}



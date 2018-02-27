#include <stdio.h>

float total(float valor) {
    return (valor+(valor*0.1));
}

int main() {
    float valor;
    scanf("%f", &valor);
    printf("%.2f", total(valor));
    return 0;
}


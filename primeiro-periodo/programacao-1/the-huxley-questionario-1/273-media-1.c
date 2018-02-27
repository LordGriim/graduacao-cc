#include <stdio.h>

double media(double n, double n2) {
    return  ((n*3.5) + (n2*7.5))/11;
}
int main(void) {
    double nota1, nota2;
    scanf("%lf %lf", &nota1, &nota2);
    printf("MEDIA = %.5lf\n", media(nota1, nota2));
    return 0;
}

 #include <stdio.h>
int diferenca(int a, int b, int c, int d) {
    return ((a*b) - (c*d));
}
int main() {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("DIFERENCA = %d", diferenca(a, b, c, d));

    return 0;
}


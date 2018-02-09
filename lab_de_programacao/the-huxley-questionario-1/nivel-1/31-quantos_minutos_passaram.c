#include <stdio.h>

int main() {
    int hora, min;

    scanf("%d %d", &hora, &min);
    printf("%d minutos.\n", (hora*60) + min);

    return 0;
}

#include <stdio.h>

float celsius(float f) {
    return ((f-32)/9)*5;
}

int main() {
    float f;

    scanf("%f", &f);
    printf("%.2f\n", celsius(f));

    return 0;
}


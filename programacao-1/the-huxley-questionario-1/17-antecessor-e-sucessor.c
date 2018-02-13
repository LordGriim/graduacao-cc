#include <stdio.h>

int antecessor(int num) {
    return num-1;
}

int sucessor(int num) {
    return num+1;
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d %d", antecessor(num), sucessor(num));
    return 0;
}


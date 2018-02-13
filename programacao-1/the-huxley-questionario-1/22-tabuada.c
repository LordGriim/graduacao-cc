#include <stdio.h>

void tabuada(int num) {
    int i;
    for(i = 1; i < 10; i++){
        printf("%d X %d = %d\n", num, i, (i * num));
    }
}

int main() {
    int num;
    scanf("%d", &num);
    tabuada(num);
    return 0;
}


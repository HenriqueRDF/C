#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("E lógico: %d\n", a && b);    // 0
    printf("Ou lógico: %d\n", a || b);   // 1
    printf("Não lógico: %d\n", !a);      // 0
    return 0;
}


#include <stdio.h>

int main() {
    int a = 1, b = 0;
    printf("E l�gico: %d\n", a && b);    // 0
    printf("Ou l�gico: %d\n", a || b);   // 1
    printf("N�o l�gico: %d\n", !a);      // 0
    return 0;
}


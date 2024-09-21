#include <stdio.h>

int main() {
    int a = 5; // 0101 em bin�rio
    int b = 3; // 0011 em bin�rio
    printf("E bit a bit: %d\n", a & b);    // 1 (0001)
    printf("Ou bit a bit: %d\n", a | b);   // 7 (0111)
    printf("Ou exclusivo bit a bit: %d\n", a ^ b); // 6 (0110)
    printf("N�o bit a bit: %d\n", ~a);     // -6 (1111...1010 em bin�rio)
    printf("Deslocamento � esquerda: %d\n", a << 1); // 10 (1010)
    printf("Deslocamento � direita: %d\n", a >> 1); // 2 (0010)
    return 0;
}

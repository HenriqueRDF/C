#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 7, d = 20, e = 10;
    int f = 5, g = 5, h = 5, i = 2, j = 8;

    // Atribuição Adicional
    a += 3;  // a = a + 3
    printf("a (+=): %d\n", a); // Saída: 8

    // Atribuição Subtrativa
    b -= 4;  // b = b - 4
    printf("b (-=): %d\n", b); // Saída: 6

    // Atribuição Multiplicativa
    c *= 2;  // c = c * 2
    printf("c (*=): %d\n", c); // Saída: 14

    // Atribuição Divisiva
    d /= 5;  // d = d / 5
    printf("d (/=): %d\n", d); // Saída: 4

    // Atribuição Modulo
    e %= 3;  // e = e % 3
    printf("e (%%=): %d\n", e); // Saída: 1

    // Atribuição Bitwise OR
    f |= 3;  // f = f | 3
    printf("f (|=): %d\n", f); // Saída: 7

    // Atribuição Bitwise AND
    g &= 3;  // g = g & 3
    printf("g (&=): %d\n", g); // Saída: 1

    // Atribuição Bitwise XOR
    h ^= 3;  // h = h ^ 3
    printf("h (^=): %d\n", h); // Saída: 6

    // Atribuição de Deslocamento à Esquerda
    i <<= 1; // i = i << 1
    printf("i (<<=): %d\n", i); // Saída: 4

    // Atribuição de Deslocamento à Direita
    j >>= 1; // j = j >> 1
    printf("j (>>=): %d\n", j); // Saída: 4

    return 0;
}

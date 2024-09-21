#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 7, d = 20, e = 10;
    int f = 5, g = 5, h = 5, i = 2, j = 8;

    // Atribui��o Adicional
    a += 3;  // a = a + 3
    printf("a (+=): %d\n", a); // Sa�da: 8

    // Atribui��o Subtrativa
    b -= 4;  // b = b - 4
    printf("b (-=): %d\n", b); // Sa�da: 6

    // Atribui��o Multiplicativa
    c *= 2;  // c = c * 2
    printf("c (*=): %d\n", c); // Sa�da: 14

    // Atribui��o Divisiva
    d /= 5;  // d = d / 5
    printf("d (/=): %d\n", d); // Sa�da: 4

    // Atribui��o Modulo
    e %= 3;  // e = e % 3
    printf("e (%%=): %d\n", e); // Sa�da: 1

    // Atribui��o Bitwise OR
    f |= 3;  // f = f | 3
    printf("f (|=): %d\n", f); // Sa�da: 7

    // Atribui��o Bitwise AND
    g &= 3;  // g = g & 3
    printf("g (&=): %d\n", g); // Sa�da: 1

    // Atribui��o Bitwise XOR
    h ^= 3;  // h = h ^ 3
    printf("h (^=): %d\n", h); // Sa�da: 6

    // Atribui��o de Deslocamento � Esquerda
    i <<= 1; // i = i << 1
    printf("i (<<=): %d\n", i); // Sa�da: 4

    // Atribui��o de Deslocamento � Direita
    j >>= 1; // j = j >> 1
    printf("j (>>=): %d\n", j); // Sa�da: 4

    return 0;
}

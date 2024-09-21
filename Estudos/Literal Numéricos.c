#include <stdio.h>
//Literais Numérico

int main() {
    // Inteiros
    int num = 20;              // Atribuindo 20 a num
    int octalNum = 025;       // 025 em octal, que é 21 em decimal
    int hexNum = 0x1A;        // 0x1A em hexadecimal, que é 26 em decimal

    // Ponto Flutuante
    float flt = 5.75;         // Valor real em ponto flutuante
    float sciNum = 2.5e3;     // 2.5 × 10^3, que é 2500.0

    // Long e Long Long
    long lNum = 123456789L;   // Valor real longo
    long long llNum = 9876543210LL; // Valor real longo longo

    // Impressão
    printf("Inteiro normal: %d\n", num);               // Saída: 20
    printf("Octal (025 em decimal): %d\n", octalNum);  // Saída: 21
    printf("Hexadecimal (0x1A em decimal): %d\n", hexNum); // Saída: 26
    printf("Float: %.2f\n", flt);                        // Saída: 5.75
    printf("Científico (2.5e3): %.2f\n", sciNum);       // Saída: 2500.00
    printf("Long: %ld\n", lNum);                         // Saída: 123456789
    printf("Long Long: %lld\n", llNum);                  // Saída: 9876543210

    return 0;
}

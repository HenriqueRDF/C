#include <stdio.h>
//Literais Num�rico

int main() {
    // Inteiros
    int num = 20;              // Atribuindo 20 a num
    int octalNum = 025;       // 025 em octal, que � 21 em decimal
    int hexNum = 0x1A;        // 0x1A em hexadecimal, que � 26 em decimal

    // Ponto Flutuante
    float flt = 5.75;         // Valor real em ponto flutuante
    float sciNum = 2.5e3;     // 2.5 � 10^3, que � 2500.0

    // Long e Long Long
    long lNum = 123456789L;   // Valor real longo
    long long llNum = 9876543210LL; // Valor real longo longo

    // Impress�o
    printf("Inteiro normal: %d\n", num);               // Sa�da: 20
    printf("Octal (025 em decimal): %d\n", octalNum);  // Sa�da: 21
    printf("Hexadecimal (0x1A em decimal): %d\n", hexNum); // Sa�da: 26
    printf("Float: %.2f\n", flt);                        // Sa�da: 5.75
    printf("Cient�fico (2.5e3): %.2f\n", sciNum);       // Sa�da: 2500.00
    printf("Long: %ld\n", lNum);                         // Sa�da: 123456789
    printf("Long Long: %lld\n", llNum);                  // Sa�da: 9876543210

    return 0;
}

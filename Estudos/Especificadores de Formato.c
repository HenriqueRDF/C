#include <stdio.h>

int main() {
    int inteiro = 42;
    float pontoFlutuante = 3.14159;
    char caractere = 'A';
    char string[] = "Ol�, Mundo!";

    // Inteiros
    printf("Inteiro: %d\n", inteiro);
    printf("Octal: %o\n", inteiro);
    printf("Hexadecimal com letra minuscula: %x\n", inteiro);
    printf("Hexadecimal com letra maiuscula: %X\n", inteiro);

    // Ponto Flutuante
    printf("Ponto Flutuante: %.2f\n", pontoFlutuante);
    printf("Nota��o Cient�fica: %.2e\n", pontoFlutuante);

    // Caractere e String
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);

    // Uso de largura e sinal
    printf("Inteiro com largura: %5d\n", inteiro);   // Largura m�nima 5
    printf("Inteiro com sinal: %+d\n", inteiro);      // Sinal expl�cito

    return 0;
}

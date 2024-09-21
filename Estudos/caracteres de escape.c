#include <stdio.h>

int main(){

  // Para termos a nova linha, precisamos usar \n:
  printf("\n Hello World! \n Estou aprendendo C.");
  // Usando dois \n (\n\n), criamos uma linha vazia
  printf("\n Hello World! \n\n Estou aprendendo C.");

  //Caracteres de escape
  // Criaremos um tab horizontal (\t)
  printf("Hello World! \t Estou aprendendo C.\n\n");
  // Iremos gerar uma barra(Backslash) (\\)
  printf("Hello World! \\ Estou aprendendo C.\n\n");
  // Iremos gerar uma aspas duplas (\")
  printf("Hello World! \"Estou aprendendo\" C.\n\n");
  return 0;
}

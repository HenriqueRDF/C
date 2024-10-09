#include <stdio.h>
#include <string.h>

struct livro{
char titulo[50];
char autor[50];
double preco;
int paginas;
}livro1;

int main(){
// Definindo os valores de 'livro1'
strcpy(livro1.titulo, "O Senhor dos Anéis");
strcpy(livro1.autor, "J.R.R. Tolkien");
livro1.preco = 50.99;
livro1.paginas = 1178;

// Acessando os valores de 'livro1'
printf("Título: %s\n", livro1.titulo);
printf("Autor %s\n", livro1.autor);
printf("Preço: R$%.2f\n", livro1.preco);
printf("Páginas: %d\n", livro1.paginas);
printf("Tamanho do struct de livro: %d", sizeof(struct livro));
return 0;
}

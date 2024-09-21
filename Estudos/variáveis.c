int main(){
//Principais Tipos

//Numéricos
int num = 15;
float flt = 10.5;
double db = 5000000000.312313;
/*float vs. double
A precisão de um valor de ponto flutuante indica quantos dígitos o valor pode ter após o ponto decimal.
A precisão de float é de seis ou sete dígitos decimais,
enquanto variáveis ​​double têm uma precisão de cerca de 15 dígitos.
Portanto, geralmente é mais seguro usar double para a maioria dos cálculos - mas observe que ele ocupa o dobro de memória que float (8 bytes vs. 4 bytes).
*/

short s = 3000;
long l = 1000000L; // <- Esse 'L' no final é um Literal Numérico de LONG.
long long ll = 10000LL; // Esse 'LL' no final é um Literal Numérico de LONG LONG.

//unsigned int armazena números inteiros NÃO negativos.
unsigned int a = 20;

//Texto
char c = 'a';
char String[] = "Hello There!"; //Uma String é um vetor de Chars
printf("%s \n\n", String);
//Substituição de valores de vars diferentes.
int Num1 = 15, Num2 = 23;

// Envio o valor de Num2 (23) para Num1
Num1 = Num2;

// Num1 vale 23, ao invés de 15
printf("Valor de Num1: %d \n\n", Num1);

//Se as vars tiveremos o mesmo valor, podemos declarar de uma vez só:
int x,y,z;
x = y = z = 50;
printf("Soma de X,Y e Z: %d \n\n", x+y+z);

//Constantes
const int CINT = 15;

//Conversão de tipos de vars - int para float

int num1 = 5;
int num2 = 2;
float soma = (float) 5 / 2;
float soma2 = (float) num1 / num2 + 2;
printf("%f %f\n\n", soma,soma2); // 2.500000

return 0;
}

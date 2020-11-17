/*
   Função: 5.35 Fibonacci. A série de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21,
   começa com os termos 0 e 1, e tem a propriedade de  estabelecer que o termo
   seguinte é a soma dos dois termos anteriores. a) Escreva uma função não recursiva  fibonacci(n) que calcule o n-ésimo número de Fibonacci. b) Determine o maior número de Fibonacci que  pode ser impresso no seu sistema. Modifique o programa da parte a) para usar double em vez de int para  calcular e retornar números de Fibonacci. Faça com que  o programa se repita até que falhe devido a um valor excessivamente alto.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edição do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// protótipo de função
double fibonacci(double num);

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variável
  double n = 0;

  // entrada de dados
  printf("Digite um número: ");
  scanf("%lf", &n);

  // chama a função
  fibonacci(n); // função recebe n - 2 como elemento

  // nova linha
  printf( "\n" );

	// Pausa o sistema
	system("pause");

	// fim do programa
	return 0;

} // fim main

// função fibonacci
double fibonacci(double num) {
  //variáveis
  double a = 0;
  double b = 1;
  double c;

  // imprime o 0 e o 1
  printf("%.0lf %.0lf ", a, b);

  // loop usando num como número final
  for(double i = 1; i <= num; i++) {
    c = a + b; // soma a mais b
    printf("%.0lf  ", c); // imprime c a soma
    a = b; // a recebe o valor de b
    b = c; // b recebe o valor de c
  } // fim for

} // fim função fibonacci

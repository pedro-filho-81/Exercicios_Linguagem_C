/*
   Fun��o: 5.35 Fibonacci. A s�rie de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21,
   come�a com os termos 0 e 1, e tem a propriedade de  estabelecer que o termo
   seguinte � a soma dos dois termos anteriores. a) Escreva uma fun��o n�o recursiva  fibonacci(n) que calcule o n-�simo n�mero de Fibonacci. b) Determine o maior n�mero de Fibonacci que  pode ser impresso no seu sistema. Modifique o programa da parte a) para usar double em vez de int para  calcular e retornar n�meros de Fibonacci. Fa�a com que  o programa se repita at� que falhe devido a um valor excessivamente alto.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale

// prot�tipo de fun��o
double fibonacci(double num);

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

  // vari�vel
  double n = 0;

  // entrada de dados
  printf("Digite um n�mero: ");
  scanf("%lf", &n);

  // chama a fun��o
  fibonacci(n); // fun��o recebe n - 2 como elemento

  // nova linha
  printf( "\n" );

	// Pausa o sistema
	system("pause");

	// fim do programa
	return 0;

} // fim main

// fun��o fibonacci
double fibonacci(double num) {
  //vari�veis
  double a = 0;
  double b = 1;
  double c;

  // imprime o 0 e o 1
  printf("%.0lf %.0lf ", a, b);

  // loop usando num como n�mero final
  for(double i = 1; i <= num; i++) {
    c = a + b; // soma a mais b
    printf("%.0lf  ", c); // imprime c a soma
    a = b; // a recebe o valor de b
    b = c; // b recebe o valor de c
  } // fim for

} // fim fun��o fibonacci

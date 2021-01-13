/*
   2.26 M�ltiplos. Escreva um programa que leia dois inteiros,  determine
   e imprima se o primeiro for um m�ltiplo do  segundo. [Dica: use
   o operador m�dulo.]  2.27 Padr�o de asteriscos alternados.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   @Autor: Pedro Filho, 13/01/2021
*/

// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal
int main(void) {// inicio de main

	// configurar para portugu�s Brasil
	setlocale( LC_ALL, "Portuguese" );

	// vari�vel
	int n1, n2;

	// Entrada de dados
	printf("Primeiro n�mero : ");
	scanf("%d", &n1);
	printf("segundo n�mero: ");
	scanf("%d", &n2);

	// Compare se o primeiro � multiplo do segundo
	if (n1 % n2 == 0 ){
		printf("%d � multiplo de %d", n1, n2);
	} // fim if

	// compare se os n�meros n�o s�o multiplos
	if (n1 % n2 != 0) {
		printf("%d n�o � multiplo de %d", n1, n2);
	} // fim if

	printf( "\n" ); // pular linha

	// pausar
	system( "pause" );

	return 0; // fim programa

} // Fim de main

/*
   2.26 Múltiplos. Escreva um programa que leia dois inteiros,  determine
   e imprima se o primeiro for um múltiplo do  segundo. [Dica: use
   o operador módulo.]  2.27 Padrão de asteriscos alternados.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   @Autor: Pedro Filho, 13/01/2021
*/

// incluir biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void) {// inicio de main

	// configurar para português Brasil
	setlocale( LC_ALL, "Portuguese" );

	// variável
	int n1, n2;

	// Entrada de dados
	printf("Primeiro número : ");
	scanf("%d", &n1);
	printf("segundo número: ");
	scanf("%d", &n2);

	// Compare se o primeiro é multiplo do segundo
	if (n1 % n2 == 0 ){
		printf("%d é multiplo de %d", n1, n2);
	} // fim if

	// compare se os números não são multiplos
	if (n1 % n2 != 0) {
		printf("%d não é multiplo de %d", n1, n2);
	} // fim if

	printf( "\n" ); // pular linha

	// pausar
	system( "pause" );

	return 0; // fim programa

} // Fim de main

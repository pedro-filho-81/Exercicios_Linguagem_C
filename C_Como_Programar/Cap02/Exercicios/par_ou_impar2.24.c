/*
   2.24 Par ou �mpar. Escreva um programa que leia um inteiro, determine
   e imprima se ele � par ou �mpar. [Dica:  use o operador m�dulo. Um n�mero
   par � um m�ltiplo de dois. Qualquer m�ltiplo de dois gera resto zero
   quando dividido por 2.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o principal
int main(void)
{ // inicio de main

   setlocale( LC_ALL, "Portuguese" );

	// Vari�veis
	int n;

	// Entre com os dados
	printf("Digite um inteiro: ");
	scanf("%d", &n );

	// Verifica se o n�mero digitado � par ou impar
	if ( n % 2 == 0){
		printf("%d e um n�mero par.", n);
	} // fim if

	if (n % 2 != 0){
		printf("%d nao e um n�mero par.", n);
	} // fim if

	return 0; // programa finalizado com sucesso

} // Fim de main

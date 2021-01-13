/*
   2.24 Par ou ímpar. Escreva um programa que leia um inteiro, determine
   e imprima se ele é par ou ímpar. [Dica:  use o operador módulo. Um número
   par é um múltiplo de dois. Qualquer múltiplo de dois gera resto zero
   quando dividido por 2.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função principal
int main(void)
{ // inicio de main

   setlocale( LC_ALL, "Portuguese" );

	// Variáveis
	int n;

	// Entre com os dados
	printf("Digite um inteiro: ");
	scanf("%d", &n );

	// Verifica se o número digitado é par ou impar
	if ( n % 2 == 0){
		printf("%d e um número par.", n);
	} // fim if

	if (n % 2 != 0){
		printf("%d nao e um número par.", n);
	} // fim if

	return 0; // programa finalizado com sucesso

} // Fim de main

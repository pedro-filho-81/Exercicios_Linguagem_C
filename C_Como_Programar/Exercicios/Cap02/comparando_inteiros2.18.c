/*
   2.18 Comparando inteiros. Escreva um programa que  peça ao usuário que
   digite dois inteiros, obtenha os nú-  meros e depois imprima o maior
   número seguido das  palavras ‘é maior’. Se os números forem iguais,
   imprima a mensagem “Esses números são iguais”. Use  apenas a forma de
   seleção única da instrução if que  você aprendeu neste capítulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edição do Kindle.
   Autor: Pedro Filho, 05/12/2020.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Variáveis
	int num01;
	int num02;

	//Entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num01);
	printf("Digite outro numero: ");
	scanf("%d", &num02);

	//Se o número 1 maior que o número 2
	if (num01 > num02){
      // imprima
		printf("%d E maior.", num01);
	} // fim if

	// Se o número 2 maior que o número 1
	if (num02 > num01){
      // imprima
		printf("%d E maior.", num02);
	} // fim if

	// se os números são iguais
	if (num01 == num02){
      // imprima
		printf("%d Os numeros sao iguais.", num01);
	} // fim if

	return 0; // Programa executado com sucesso.
} // fim main

/*
   2.18 Comparando inteiros. Escreva um programa que  pe�a ao usu�rio que
   digite dois inteiros, obtenha os n�-  meros e depois imprima o maior
   n�mero seguido das  palavras �� maior�. Se os n�meros forem iguais,
   imprima a mensagem �Esses n�meros s�o iguais�. Use  apenas a forma de
   sele��o �nica da instru��o if que  voc� aprendeu neste cap�tulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edi��o do Kindle.
   Autor: Pedro Filho, 05/12/2020.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Vari�veis
	int num01;
	int num02;

	//Entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num01);
	printf("Digite outro numero: ");
	scanf("%d", &num02);

	//Se o n�mero 1 maior que o n�mero 2
	if (num01 > num02){
      // imprima
		printf("%d E maior.", num01);
	} // fim if

	// Se o n�mero 2 maior que o n�mero 1
	if (num02 > num01){
      // imprima
		printf("%d E maior.", num02);
	} // fim if

	// se os n�meros s�o iguais
	if (num01 == num02){
      // imprima
		printf("%d Os numeros sao iguais.", num01);
	} // fim if

	return 0; // Programa executado com sucesso.
} // fim main

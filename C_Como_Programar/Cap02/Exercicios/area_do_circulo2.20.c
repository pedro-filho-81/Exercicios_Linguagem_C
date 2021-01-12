/*
   2.20 Di�metro, circunfer�ncia e �rea de um c�rculo.  Escreva um programa
   que leia o raio de um c�rculo e  informe o di�metro, a circunfer�ncia e
   a �rea do c�rculo.  Utilize o valor constante 3,14159 para p. Realize cada
   um desses c�lculos dentro das instru��es printf e o especificador de
   convers�o %f. [Nota: neste cap�tulo,  discutimos apenas constantes
   e vari�veis inteiras. No Cap�tulo 3, discutiremos os n�meros em ponto flutuante,
   ou seja, valores que podem ter pontos decimais.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edi��o do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese" );

	// Constante
	const float PI = 3.14159;

	//Vari�veis
	float raio, diametro, circunferencia, area;

	// Entrada de dados
	printf("Digite o tamanho do raio: ");
	scanf("%f", &raio);

	//Calculando
	diametro = raio * 2;
	circunferencia = diametro * PI;
	area = (raio * raio) * PI;

	// Mostra dados.
 	printf("\nRaio = %.2f cm", raio);
 	printf("\nDiametro = %.2f cm.", diametro);
	printf("\nCircunfer�ncia = %.2f cm", circunferencia);
	printf("\n�rea = %.2f cm\n", area);

	return 0;
} // fim main

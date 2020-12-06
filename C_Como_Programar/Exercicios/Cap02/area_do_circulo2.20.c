/*
   2.20 Diâmetro, circunferência e área de um círculo.  Escreva um programa
   que leia o raio de um círculo e  informe o diâmetro, a circunferência e
   a área do círculo.  Utilize o valor constante 3,14159 para p. Realize cada
   um desses cálculos dentro das instruções printf e o especificador de
   conversão %f. [Nota: neste capítulo,  discutimos apenas constantes
   e variáveis inteiras. No Capítulo 3, discutiremos os números em ponto flutuante,
   ou seja, valores que podem ter pontos decimais.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 41). Edição do Kindle.
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

	//Variáveis
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
	printf("\nCircunferência = %.2f cm", circunferencia);
	printf("\nÁrea = %.2f cm\n", area);

	return 0;
} // fim main

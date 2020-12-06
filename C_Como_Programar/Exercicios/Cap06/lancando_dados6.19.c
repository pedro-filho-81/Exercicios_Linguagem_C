/*
   Arrays: 6.19 Lançando dados. Escreva um programa que simule o lançamento de
   dois dados. O programa deverá usar rand para lançar o primeiro dado, e deverá
   usar rand novamente para lançar o segundo dado.  Em seguida, a soma dos dois
   valores deverá ser calculada. [Nota: como cada dado pode mostrar um  valor
   inteiro de 1 a 6, então, a soma dos dois valores  variará de 2 a 12, com 7
   sendo o resultado mais frequente; e 2 e 12, os resultados menos frequentes.]
   A Figura 6.23 mostra as 36 combinações possíveis  dos dois dados. Seu programa
   deverá lançar os dois  dados 36.000 vezes. Use um array de subscrito único
   para contar o número de vezes em que cada resultado possível aparece. Imprima
   os resultados em um  formato tabular. Além disso, determine se os resultados
   são razoáveis; ou seja, existem seis maneiras  de somar um 7, de modo que um
   sexto de todas as  jogadas, aproximadamente, deverá ser 7.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 201). Edição do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

	// variáveis
	int dado1 = 0, dado2 = 0, soma = 0;
	int jogar[ 13 ] = {0};

	printf( " LANÇANDO DADOS\n" );

	//ADICIONA VALOR
	srand( time( NULL ) );
	for( int lancar = 1; lancar < 36000; lancar++ )
  {
    dado1 = 1 + rand() % 6; // dado1 recebe num alea
    dado2 = 1 + rand() % 6; // dado2 recebe num alea
    soma = dado1 + dado2; // soma os dados e
    ++jogar[ soma ]; // array jogar conta às vezes que um num aparece
  }

  // MOSTRA O RESULTADO DAS JOGADAS
  for( int lance = 2; lance <= 12; lance++ )
  {
    // se lance for um número par
    if( lance % 2 == 0 )
    { // pule uma linha
      printf( "\n" );
    } // fim if
    // imprima
    printf( "[%2d]%5d", lance, jogar[ lance ] );
  }

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;
} // fim main

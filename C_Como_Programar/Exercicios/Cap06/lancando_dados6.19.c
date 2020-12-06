/*
   Arrays: 6.19 Lan�ando dados. Escreva um programa que simule o lan�amento de
   dois dados. O programa dever� usar rand para lan�ar o primeiro dado, e dever�
   usar rand novamente para lan�ar o segundo dado.  Em seguida, a soma dos dois
   valores dever� ser calculada. [Nota: como cada dado pode mostrar um  valor
   inteiro de 1 a 6, ent�o, a soma dos dois valores  variar� de 2 a 12, com 7
   sendo o resultado mais frequente; e 2 e 12, os resultados menos frequentes.]
   A Figura 6.23 mostra as 36 combina��es poss�veis  dos dois dados. Seu programa
   dever� lan�ar os dois  dados 36.000 vezes. Use um array de subscrito �nico
   para contar o n�mero de vezes em que cada resultado poss�vel aparece. Imprima
   os resultados em um  formato tabular. Al�m disso, determine se os resultados
   s�o razo�veis; ou seja, existem seis maneiras  de somar um 7, de modo que um
   sexto de todas as  jogadas, aproximadamente, dever� ser 7.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 201). Edi��o do Kindle.
   Autor: Pedro Filho, 06/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	// vari�veis
	int dado1 = 0, dado2 = 0, soma = 0;
	int jogar[ 13 ] = {0};

	printf( " LAN�ANDO DADOS\n" );

	//ADICIONA VALOR
	srand( time( NULL ) );
	for( int lancar = 1; lancar < 36000; lancar++ )
  {
    dado1 = 1 + rand() % 6; // dado1 recebe num alea
    dado2 = 1 + rand() % 6; // dado2 recebe num alea
    soma = dado1 + dado2; // soma os dados e
    ++jogar[ soma ]; // array jogar conta �s vezes que um num aparece
  }

  // MOSTRA O RESULTADO DAS JOGADAS
  for( int lance = 2; lance <= 12; lance++ )
  {
    // se lance for um n�mero par
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

/*
   Ponteiros: 8) Crie uma fun��o que receba dois par�metros: um
   vetor e um valor do mesmo tipo do vetor. A fun��o dever� preencher
   os elementos de vetor com esse valor. N�o utilize �ndices para
   percorrer o vetor, apenas aritm�tica de ponteiros.
   Backes, Andr�. Linguagem C (p. 213). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

// prot�tipo
void preencherVetor( int *vetor, int valor );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria um vetor inteiro
   int vetor[ TAMANHO ];

   // cria vari�vel
   int valor;

   // cabe�alho
   printf( "PREENCHER VETOR COM VARI�VEL\n" );

   // entrada de dados
   // entrar com o valor
   printf( "Digite um valor: " );
   scanf( "%d", &valor );

   // chamar a fun��o preencherVetor
   preencherVetor( vetor, valor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o preencher vetor
void preencherVetor( int *vetor, int valor )
{
   // loop para preencher o vetor
   for( int i = 0; i < 10; i++ )
      // ponteiro recebe o valor da vari�vel
      *(vetor + i) = valor;

   // loop para mostrar os valores do vetor
   for( int j = 0; j < 10; j++ )
      // imprimir
      printf( "%d ", *(vetor + j ) );
}

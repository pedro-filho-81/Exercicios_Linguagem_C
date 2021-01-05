/*
   Ponteiros: 8) Crie uma função que receba dois parâmetros: um
   vetor e um valor do mesmo tipo do vetor. A função deverá preencher
   os elementos de vetor com esse valor. Não utilize índices para
   percorrer o vetor, apenas aritmética de ponteiros.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

// protótipo
void preencherVetor( int *vetor, int valor );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria um vetor inteiro
   int vetor[ TAMANHO ];

   // cria variável
   int valor;

   // cabeçalho
   printf( "PREENCHER VETOR COM VARIÁVEL\n" );

   // entrada de dados
   // entrar com o valor
   printf( "Digite um valor: " );
   scanf( "%d", &valor );

   // chamar a função preencherVetor
   preencherVetor( vetor, valor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função preencher vetor
void preencherVetor( int *vetor, int valor )
{
   // loop para preencher o vetor
   for( int i = 0; i < 10; i++ )
      // ponteiro recebe o valor da variável
      *(vetor + i) = valor;

   // loop para mostrar os valores do vetor
   for( int j = 0; j < 10; j++ )
      // imprimir
      printf( "%d ", *(vetor + j ) );
}

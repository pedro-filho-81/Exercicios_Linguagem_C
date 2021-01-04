/*
   Ponteiros: 6) Crie um programa que contenha um array com cinco
   elementos inteiros. Leia esse array do teclado e imprima o endereço
   das posições contendo valores pares.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 04/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 5

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vetor
   int vetor[ LINHA ];

   // CRIA O ponteiro que recebe o vetor
   int *vtrPtr = vetor;

   // cabeçalho
   printf( "ENTRADA DE DADOS\n" );

   // loop adiciona valores ao vetor
   for( int i = 0; i < LINHA; i++ )
   {
      // entrada de dados
      printf( "%dº valor: ", i + 1 );
      // adiciona valor ao vetor
      scanf( "%d", &vetor[ i ] ); // usuário

   } // fim for

   // cabeçalho
   printf( "\nENDEREÇO DOS NÚMEROS PARES\n" );

   // loop para mostrar os dados
   for( int j = 0; j < LINHA; j++ )
   {
      // verificar se o valor no vetor é par
      // usando o ponteiro vtrPtr
      if( *( vtrPtr + j ) % 2 == 0 ) // se verdade
      {
         // imprimir o valor e o endereço
         // *(vtrPtr + j) - mostra o valor
         // vtrPtr + j - mostra o endereço
         printf( "O endereço de %d é %d\n", *( vtrPtr + j ), vtrPtr + j );
      } // fim if
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

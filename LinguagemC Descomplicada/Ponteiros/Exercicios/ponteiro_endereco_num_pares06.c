/*
   Ponteiros: 6) Crie um programa que contenha um array com cinco
   elementos inteiros. Leia esse array do teclado e imprima o endere�o
   das posi��es contendo valores pares.
   Backes, Andr�. Linguagem C (p. 213). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 04/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 5

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vetor
   int vetor[ LINHA ];

   // CRIA O ponteiro que recebe o vetor
   int *vtrPtr = vetor;

   // cabe�alho
   printf( "ENTRADA DE DADOS\n" );

   // loop adiciona valores ao vetor
   for( int i = 0; i < LINHA; i++ )
   {
      // entrada de dados
      printf( "%d� valor: ", i + 1 );
      // adiciona valor ao vetor
      scanf( "%d", &vetor[ i ] ); // usu�rio

   } // fim for

   // cabe�alho
   printf( "\nENDERE�O DOS N�MEROS PARES\n" );

   // loop para mostrar os dados
   for( int j = 0; j < LINHA; j++ )
   {
      // verificar se o valor no vetor � par
      // usando o ponteiro vtrPtr
      if( *( vtrPtr + j ) % 2 == 0 ) // se verdade
      {
         // imprimir o valor e o endere�o
         // *(vtrPtr + j) - mostra o valor
         // vtrPtr + j - mostra o endere�o
         printf( "O endere�o de %d � %d\n", *( vtrPtr + j ), vtrPtr + j );
      } // fim if
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

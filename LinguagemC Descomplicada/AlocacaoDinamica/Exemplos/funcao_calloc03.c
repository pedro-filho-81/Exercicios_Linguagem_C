/*
   Aloca��o: A fun��o CALLOC( ) - tamb�m serve para alocar mem�ria
   durante a execu��o do programa.
   Backes, Andr�. Linguagem C (p. 220). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 06/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>3

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // CRIA um ponteiro
   int *ptr1;

   // cria um vetor para 50 elementos
   ptr1 = ( int * ) malloc( 5 *sizeof( int ) );

   // verifica se tem memoria sufuciente para suportaro vetor
   if( ptr1 == NULL )
   {
      printf( "ERRO! Memoria insufuciente!\n" );
   } // fim if

   // cria o segundo ponteiro
   int *ptr2;

   // cria um vetor para 50 elementos com calloc()
   ptr2 = ( int * ) calloc( 5, sizeof( int ) );

   // verifica se tem memoria sufuciente para suportaro vetor
   if( ptr2 == NULL )
   {
      printf( "ERRO! Memoria insufuciente!\n" );
   } // fim if

   // DIFEREN�A ENTRE A FUN��O MALLOC E CALLOC
   printf( "ptr1 = ( int * ) malloc( 50 *sizeof( int ) );" );
   printf( "\nA fun��o malloc() multiplica o total de elementos "
          "\ndo array pelo tamanho de cada elemento.\n" );

   printf( "\nptr2 = ( int * ) calloc( 50, sizeof( int ) );" );
   printf( "\nA fun��o calloc() recebe os dois valores como "
          "\npar�metros distintos\n" );

   printf( "\nCalloc \t\t Malloc \n" );

   // mostrando
   for( int i = 0; i < 5; i++ )
   {
      printf( "ptr2[ %d ] = %d \t ptr1[ %d ] = %d\n", i, ptr2[ i ], i, ptr1[ i ] );
   }
   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

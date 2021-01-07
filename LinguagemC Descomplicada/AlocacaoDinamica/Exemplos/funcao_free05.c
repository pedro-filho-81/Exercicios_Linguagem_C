 /*
   Aloca��o:  fun��o free() libera espa�o na memoria
   Auto: Pedro Filho, 07/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vari�vel
   int i;

   // cria o ponteiro ptr para aloca��o com a fun��o malloc
   int *ptr = ( int *) malloc( 50 * sizeof( int ) );
   // verifica se tem memoria suficiente
   if( ptr == NULL )
   {
      // IMPRIME
      printf( "ERRO! Memoria insuficiente!\n" );
      // pausar o sistema
      system( "pause" );
      // sair do programa
      exit(1);

   } // fim if

   // loop para adicionar elementos
   for( i = 0; i < 50; i++ )
   {
      // adiciona valor ao vetor ptr
      ptr[ i ] = i + 1;
   } // fim for

   // MOSTRA VETOR
   printf( "\nptr = " );
   //loop para mostrar os valores do vetor
   for( i = 0; i < 50; i++ )
   {
      // quando for multiplo de 10 pular uma linha
      if( i % 10 == 0 ) printf( "\n" );

      // imprime
      printf( "%3d ", ptr[ i ] );
   } // fim for

   // libera memoria alocada
   free( ptr );
   ptr = NULL;

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

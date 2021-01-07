/*
   Alocação:
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>3

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria variável
   int i;

   // cria o ponteiro ptr que recebe a função realloc()
   int *ptr = ( int *) realloc( NULL, 5 * sizeof( int ) );

   // imprime
   printf( "Cria o ponteiro ptr."
          "\nint *ptr = ( int *) realloc( NULL, 5 * sizeof( int ) );\n"
          "\nSe o ponteiro para o bloco de memoria for NULO"
          "\nA função realloc() alocara memoria da mesma"
          "\nforma que a função malloc().\n" );

   // loop para adicionar valores
   for( i = 0; i < 5; i++ )
   {
      // vetor ptr recebe i mais 1
      ptr[ i ] = i + 1;
   } // fim for

   printf( "ptr = " );
   // loop para mostrar valores do vetor
   for( i = 0; i < 5; i++ )
   {
      // imprime
      printf( "%d ", ptr[ i ] );
   } // fim for

   // pular uma linha
   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

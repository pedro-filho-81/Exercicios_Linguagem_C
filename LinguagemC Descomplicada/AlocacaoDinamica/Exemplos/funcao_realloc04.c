/*
   Aloca��o: A fun��o realloc() serve para alocar mem�ria ou realocar
   blocos de mem�ria previamente alocados pelas
   fun��es malloc(), calloc() ou realloc().
   Backes, Andr�. Linguagem C (p. 221). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 05/01/2021
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

   // vari�vel
   int i;

   // cria o ponteiro ptr que recebe malloc()
   int *ptr = malloc( 5 *sizeof( int ) );

   // cabbe�alho
   printf( " FUN��O REALLOC() \n" );
   printf( "Cria o ponteiro de 5 posi��es usando malloc():"
           "\nint *ptr = malloc( 5 *sizeof( int ) );\n" );

   // loop para adicionar valor
   for( i = 0; i < 5; i++ )
   {
      // vetor ptr recebe i mais 1
      ptr[ i ] = i + 1;
   } // fim for

   printf( "ptr = " );
   // loop para mostrar valores do vetor
   for( i = 0; i < 5; i++ )
   {
      // imprime vetor
      printf( "%d ", ptr[ i ] );
   } // fim for

   // diminuindo o tamanho da memoria com realloc()
   ptr = realloc( ptr, 3 * sizeof( int ) );

   printf( "\n\nDiminui para 3 o tamanho da memoria com realloc():"
          "\nptr = realloc( ptr, 3 * sizeof( int ) );" );

   // imprime
   printf( "\nptr = " );
   // loop para mostra os valores de ptr
   for( i = 0; i < 3; i++ )
   {
      // imprime
      printf( "%d ", ptr[ i ] );
   } // fim for

   // aumentando o tamanho da memoria
   ptr = realloc( ptr, 10 * sizeof( int ) );

   // imprime
   printf( "\n\nAumenta para 10 o tamanho da memoria com realloc():"
          "\nptr = realloc( ptr, 10 * sizeof( int ) );" );

   // imprime
   printf( "\nptr = " );
   // loop para mostra os valores de ptr
   for( i = 0; i < 10; i++ )
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

}  // FIM FUN��O MAIN

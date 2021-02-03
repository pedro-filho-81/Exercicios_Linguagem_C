/*
   Questão:
   Autor: @Pedro Filho, 03/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int i, j, k;

   // loop for
   for( i = 1; i <= 5; i++ ) {
      for( j = 1; j <= 3; j++ ) {
         for( k = 1; k <= 4; k++ ) {
            printf( "*" );
         printf( "\n" );
         }
      printf( "\n" );
      }
   }
   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

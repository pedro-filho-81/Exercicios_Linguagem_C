/*
   Quest�o:
   Autor: @Pedro Filho, 18/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int x, y, i, j;

   // Entrada de dados
   printf( "Digite um n�mero entre 1 e 20: " );
   scanf( "%d%d", &x, &y );

   // loop para o y
   for( i = 1; i <= y; i++ ) {

      //loop para x
      for( j = 1; j <= x; j++ ) {

         // imprima
         printf( "@ " );
      } // fim for interno

   // pular linha
   printf( "\n" );

   } // fim for externo

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

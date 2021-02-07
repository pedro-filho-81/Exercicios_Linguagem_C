/*
   Questão: mostrar o valor de x
   Autor: @Pedro Filho, 06/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável x
   int x;

   // cabeçalho
   printf( "FUNÇÃO MATEMÁTICA\n" );

   // x recebe
   x = fabs( 7.5 );
   printf( "x = fabs( 7.5 ) / x = %d\n", x );

   x = floor( 7.5 );
   printf( "x = floor(7.5 ) / x = %d\n", x );

   x = fabs( 0.0 );
   printf( "x = fabs( 0.0 ) / x = %d\n", x );

   x = ceil( 0.0 );
   printf( "x = ceil( 0.0 ) / x = %d\n", x );

   x = fabs( -6.4 );
   printf( "x = fabs( -6.4 ) / x = %d\n", x );

   x = ceil( -6.4 );
   printf( "x = ceil( -6.4 ) / x = %d\n", x );

   x = ceil( -fabs( -8 + floor( -5.5 ) ) );
   printf( "x = ceil( -fabs( -8 + floor( -5.5 ) ) ) / x = %d\n", x );




   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

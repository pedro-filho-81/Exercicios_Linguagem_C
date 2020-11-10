/* Função:
   Pedro Filho, 06/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// função principal
int main()
{
   setlocale(LC_ALL, "Portuguese" );

   float x = fabs( 7.5 );
   printf( "fabs( 7,5 ) = %f\n" , x );
   x = floor( 7.5 );
   printf( "floor( 7,5 ) = %f\n" , x );
   x = fabs( 0.0 );
   printf( "fabs( 0.0 ) = %f\n" , x );
   x = ceil( 0.0 );
   printf( "Ceill( 0.0 ) = %f\n", x );
   x = fabs( 6.5);
   printf( "fabs( 6.5 ) = %f\n" , x );
   x = ceil( 6.5 );
   printf( "Ceill( 6.5 ) = %f\n", x );
   x = ceil( - fabs( -8 + ( + floor( - 5.5 ))));
   printf( "X = %.2f\n", x );

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

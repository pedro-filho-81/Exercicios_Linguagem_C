/*
   Quest�o: Pre-incremento e P�s-incremento
   Pedro Filho, 14/01/2021
*/

// Incluir Biblioteca
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int c = 5;

   // imprime p�s-incremento
   printf( "int c = 5; - cria vari�vel\n" );
   printf( "c = %d - vari�vel antes do p�s-incremento.\n", c );
   printf( "c++ - p�s-incremento soma 1 a c, "
          "\nO valor de c depois do p�s-incremento � %d\n", c++ );

   // c recebe 5
   c = 5;

   // imprime pr�-incremento
   printf( "\nint c = 5; - cria vari�vel\n" );
   printf( "c = %d - vari�vel antes do pr�-incremento.\n", c );
   printf( "++c - pr�-incremento soma 1 a c "
          "\nO valor de c depois do pr�-incremento � %d\n\n", ++c );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

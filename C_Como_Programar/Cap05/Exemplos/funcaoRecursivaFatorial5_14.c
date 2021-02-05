/*
   Quest�o:Fig. 5.14: fig05_14.c  2 Fun��o recursiva fatorial
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 139). Edi��o do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
long fatorial( long numero );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int i = 0;

   printf( "FATORIAL\n" ); // cabe�alho

   // loop para mostrar o resultado
   for( i = 0; i <= 10; i++ ) {
      // imprima
      printf( "%2d! = %1d\n", i, fatorial( i )  );
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o fatorial
long fatorial( long numero )
{
   // se numero igual a 0 ou 1
   if( numero == 0 || numero == 1 )
      return 1; // retorne 1
   else
      // retorne o n�mero vezes a fun��o fatorial menos 1
      return ( numero * fatorial( numero - 1) ) ;
} // fim fun��o fatorial

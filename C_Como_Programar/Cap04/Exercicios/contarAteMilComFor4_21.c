/*
   Quest�o: 4.21 Reescreva o programa da Figura 4.2 de modo que
   a inicializa��o da vari�vel contador seja feita na declara��o,
   e n�o na estrutura for.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edi��o do Kindle.
   Autor: @Pedro Filho, 28/01/2021
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
   int contador = 1; // inicializa contador fora do for

   // loop para imprimir at� mil
   for( ; contador <= 1000; contador++ ) {

      // imprimir
      printf( "%5d", contador );

   }  // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

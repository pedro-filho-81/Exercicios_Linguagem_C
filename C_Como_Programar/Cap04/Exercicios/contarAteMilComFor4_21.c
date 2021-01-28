/*
   Questão: 4.21 Reescreva o programa da Figura 4.2 de modo que
   a inicialização da variável contador seja feita na declaração,
   e não na estrutura for.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 110). Edição do Kindle.
   Autor: @Pedro Filho, 28/01/2021
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

   // variável
   int contador = 1; // inicializa contador fora do for

   // loop para imprimir até mil
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

}  // FIM FUNÇÃO MAIN

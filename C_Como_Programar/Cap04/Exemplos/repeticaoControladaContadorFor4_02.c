/*
   Questão: /* Fig. 4.2: fig04_02.c  2 Repetição controlada por contador com a estrutura for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 82). Edição do Kindle.
   @Pedro Filho, 20/01/2021
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
   int contador;

   // loop for para 10 repetições
   for( contador = 1; contador <= 10; contador++ ) {

      // imprima
      printf( "%d\n", contador );

   }  // fim for

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

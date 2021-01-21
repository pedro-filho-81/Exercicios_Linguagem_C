/*
   Questão: /* Fig. 4.9: fig04_09.c  2 Usando a estrutura de repetição do/while
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 93). Edição do Kindle.
   @Pedro Filho, 21/01/2021
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
   int contador = 1;

   // loop do/while para contar até 10
   do {

      // imprima
      printf( "%d ", contador );

   } while( ++contador <= 10 );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

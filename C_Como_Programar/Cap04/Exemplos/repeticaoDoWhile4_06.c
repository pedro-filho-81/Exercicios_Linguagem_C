/*
   Quest�o: /* Fig. 4.9: fig04_09.c  2 Usando a estrutura de repeti��o do/while
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 93). Edi��o do Kindle.
   @Pedro Filho, 21/01/2021
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
   int contador = 1;

   // loop do/while para contar at� 10
   do {

      // imprima
      printf( "%d ", contador );

   } while( ++contador <= 10 );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

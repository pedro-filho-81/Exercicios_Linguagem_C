/*
   Quest�o: /* Fig. 4.11: fig04_11.c  2 Usando o comando break em uma estrutura for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 94). Edi��o do Kindle.
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
   int contador;

   // loop for para contar at� 10
   for( contador = 1; contador <= 10; contador++ ) {

      // se contador == 5 pare
      if( contador == 5 )
         // pare
         break;

      // imprima
      printf( "%d ", contador );

   } // fim loop for

   // imprima
   printf( "Saiu do loop quando o contador chegou a 5.\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

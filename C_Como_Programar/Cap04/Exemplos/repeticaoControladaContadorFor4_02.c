/*
   Quest�o: /* Fig. 4.2: fig04_02.c  2 Repeti��o controlada por contador com a estrutura for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 82). Edi��o do Kindle.
   @Pedro Filho, 20/01/2021
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

   // loop for para 10 repeti��es
   for( contador = 1; contador <= 10; contador++ ) {

      // imprima
      printf( "%d\n", contador );

   }  // fim for

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Quest�o: Fig. 4.12: fig04_12.c  8 Usando o comando continue em uma estrutura for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 95). Edi��o do Kindle.
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
         // continue
         continue;

      // imprima
      printf( "%d ", contador );

   } // fim loop for

   // imprima
   printf( "\nA condi��o - if( contador == 5 ) continue;\n\n" );
   printf( "Diferendo de BREAK, CONTINUE n�o interrompe "
          "\no loop quando o contador chega a 5.\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Questão: Fig. 4.12: fig04_12.c  8 Usando o comando continue em uma estrutura for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 95). Edição do Kindle.
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
   int contador;

   // loop for para contar até 10
   for( contador = 1; contador <= 10; contador++ ) {

      // se contador == 5 pare
      if( contador == 5 )
         // continue
         continue;

      // imprima
      printf( "%d ", contador );

   } // fim loop for

   // imprima
   printf( "\nA condição - if( contador == 5 ) continue;\n\n" );
   printf( "Diferendo de BREAK, CONTINUE não interrompe "
          "\no loop quando o contador chega a 5.\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

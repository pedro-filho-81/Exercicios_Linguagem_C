/*
   Questão: /* Fig. 5.7: fig05_07.c  2 Inteiros escalados e deslocados,
   produzidos por 1 + rand()% 6
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 125). Edição do Kindle.
   @Pedro Filho, 04/02/2021
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

   // variável contador
   int i = 0;

   // cabeçalho
   printf( "NÚMEROS ALEATÓRIOS\n" );

   // loop for para imprimir os números aleatórios
   for( i = 1; i <= 20; i++ ) {
      // imprime
      printf( "%5d", 1 + ( rand() % 6 ) );

      if( i % 5 == 0 ) {
         // pular linha
         printf( "\n" );
      } // fim if
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

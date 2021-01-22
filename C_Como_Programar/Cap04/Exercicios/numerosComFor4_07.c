/*
   Questão: 4.7 Escreva estruturas for que imprimam a seguinte sequência
   de valores:
   a) 1, 2, 3, 4, 5, 6, 7
   b) 3, 8, 13, 18, 23
   c) 20, 14, 8, 2, –4, –10
   d) 19, 27, 35, 43, 51
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 22/01/2021
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

   int i; // variável

   // imprime
   printf( "A) " );

   // loop para a
   for( i= 1; i <= 7; i++ ) {

      // imprime
      printf( "%d ", i );
   } // fim for a

   // pular linha
   printf( "\nB) " );

   // loop para b
   for( i= 3; i <= 23; i += 5 ) {

      // imprime
      printf( "%d ", i );
   } // fim for b

   // pular linha
   printf( "\nC) " );

   // loop para c
   for( i= 20; i >= -10; i += -6 ) {

      // imprime
      printf( "%d ", i );
   } // fim for b

   // pular linha
   printf( "\nD) " );


   // loop para d
   for( i= 19; i <= 51; i += 8 ) {

      // imprime
      printf( "%d ", i );
   } // fim for b

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

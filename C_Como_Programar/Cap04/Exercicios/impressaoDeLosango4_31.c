/*
   Quest�o: 4.31 Programa de impress�o de losango. Escreva um  programa que
   imprima a forma de losango a seguir. Voc�  pode usar instru��es printf que
   exibem um �nico  asterisco (*) ou um espa�o em branco. Maximize o uso  da
   repeti��o (com estruturas for aninhadas) e minimize o n�mero de instru��es printf.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edi��o do Kindle.
   Autor: @Pedro Filho, 02/02/2021
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

   // vari�veis
   int i, j, k; // para os loops for

   // loop for para linha
   for( i = 1; i <= 5; i++ ) {

      // loop para espa�o
      for( j = i; j <= 5; j++ ) {
         // imprimir
         printf( " " );
      } // fim for espa�o

      // loop para primeiro asterisco
      for( k = 1; k <= i; k++ ) {
         // imprima
         printf( "*" );
      } // fim for asterisco

      // loop para segundo asterisco
      for( k = 2; k <= i; k++ ) {
         // imprima
         printf( "*" );
      } // fim for asterisco

      // pular linha
      printf( "\n" );
   } // fim for externo

   // LOOPS PARA A SEGUNDA PARTE DO LOSANGO
   // loop para linha
   for( i = 1; i <= 4; i++ ) {
      printf( " " );

      // loop para espa�o
      for( j = i; j >= 1; j-- ) {

         // imprime
         printf( " " );
      } // fim for espa�o

      // loop para asterisco
      for( k = 4; k >= i; k-- ) {

         // imprime
         printf( "*" );
      } // fim for asterisco

      // loop para asterisco
      for( j = i; j <= 3; j++ ) {

         // imprime
         printf( "*" );
      } // fim for asterisco

      // pular linha
      printf( "\n" );
   } // fim for externo

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

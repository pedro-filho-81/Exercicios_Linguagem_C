/*
   Questão: 4.31 Programa de impressão de losango. Escreva um  programa que
   imprima a forma de losango a seguir. Você  pode usar instruções printf que
   exibem um único  asterisco (*) ou um espaço em branco. Maximize o uso  da
   repetição (com estruturas for aninhadas) e minimize o número de instruções printf.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edição do Kindle.
   Autor: @Pedro Filho, 02/02/2021
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

   // variáveis
   int i, j, k; // para os loops for

   // loop for para linha
   for( i = 1; i <= 5; i++ ) {

      // loop para espaço
      for( j = i; j <= 5; j++ ) {
         // imprimir
         printf( " " );
      } // fim for espaço

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

      // loop para espaço
      for( j = i; j >= 1; j-- ) {

         // imprime
         printf( " " );
      } // fim for espaço

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

}  // FIM FUNÇÃO MAIN

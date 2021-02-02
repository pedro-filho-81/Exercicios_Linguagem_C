/*
   Questão: 4.32 Programa de impressão de losango modificado. Modifique
   o programa que você escreveu no Exercício 4.31 para ler um número ímpar
   no intervalo de  1 a 19, para especificar o número de linhas no losango.
   Seu programa deverá, então, exibir um losango  com o tamanho apropriado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edição do Kindle.
   Autor: @Pedro Filho, 02/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int i, j, k; // para os loops for
   int num = 0;

   // loop para adicionar o valor do número
   for( i = 1; i <= 19; i += 2 ) {

      // num recebe i
      num = i;
      // imprime num
      printf( "Losango com %d linhas.\n", num );

      // loop for para linha
      for( i = 1; i <= num; i++ ) {

         // loop para espaço
         for( j = i; j <= num; j++ ) {
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
      for( i = 1; i <= num - 1; i++ ) {
         printf( " " );

         // loop para espaço
         for( j = i; j >= 1; j-- ) {

            // imprime
            printf( " " );
         } // fim for espaço

         // loop para asterisco
         for( k = num - 1; k >= i; k-- ) {

            // imprime
            printf( "*" );
         } // fim for asterisco

         // loop para asterisco
         for( j = i; j <= num - 2; j++ ) {

            // imprime
            printf( "*" );
         } // fim for asterisco

         // pular linha
         printf( "\n" );
      } // fim for externo

      sleep( 3 ); // pausa 3 segundos

   } // fim for num

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

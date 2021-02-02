/*
   Quest�o: 4.32 Programa de impress�o de losango modificado. Modifique
   o programa que voc� escreveu no Exerc�cio 4.31 para ler um n�mero �mpar
   no intervalo de  1 a 19, para especificar o n�mero de linhas no losango.
   Seu programa dever�, ent�o, exibir um losango  com o tamanho apropriado.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 111). Edi��o do Kindle.
   Autor: @Pedro Filho, 02/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int i, j, k; // para os loops for
   int num = 0;

   // loop para adicionar o valor do n�mero
   for( i = 1; i <= 19; i += 2 ) {

      // num recebe i
      num = i;
      // imprime num
      printf( "Losango com %d linhas.\n", num );

      // loop for para linha
      for( i = 1; i <= num; i++ ) {

         // loop para espa�o
         for( j = i; j <= num; j++ ) {
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
      for( i = 1; i <= num - 1; i++ ) {
         printf( " " );

         // loop para espa�o
         for( j = i; j >= 1; j-- ) {

            // imprime
            printf( " " );
         } // fim for espa�o

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

}  // FIM FUN��O MAIN

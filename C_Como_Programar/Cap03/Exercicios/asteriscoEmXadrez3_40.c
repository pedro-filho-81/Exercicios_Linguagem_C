/*
   Quest�o: 3.40 Padr�o de asteriscos em xadrez. Escreva um programa que
   apresente o seguinte padr�o de tabuleiro de  xadrez: Seu programa dever�
   usar apenas tr�s instru��es de sa�-  da, uma de cada das seguintes formas:
   printf( �* �);  printf( � �);  printf( �\n�);
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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
   int linha = 1;
   int coluna = 1;

   // cabe�alho
   printf( "ASTERISCO EM XADREZ\n" );

   // enquanto linha menor ou igual a 10 fa�a
   while( linha <= 10 ) {

      // verifica se a linha � par
      if( linha % 2 == 0 ) // se verdade

         // imprima um espa�o em branco primeiro
         printf( " " );

      // enquanto coluna menor ou igual a 10 fa�a
      while( coluna <= 10 ) {

         // imprima asterisco
         printf( "* " );

         // incrementa coluna
         coluna++;

      } // fim while coluna

      // reinicializa coluna com 1
      coluna = 1;

      // pule uma linha
      printf( "\n" );

      // incrementa linha
      linha++;

   } // fim while linha

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

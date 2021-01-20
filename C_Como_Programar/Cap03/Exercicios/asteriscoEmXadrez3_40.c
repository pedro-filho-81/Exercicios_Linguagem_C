/*
   Questão: 3.40 Padrão de asteriscos em xadrez. Escreva um programa que
   apresente o seguinte padrão de tabuleiro de  xadrez: Seu programa deverá
   usar apenas três instruções de saí-  da, uma de cada das seguintes formas:
   printf( “* “);  printf( “ “);  printf( “\n”);
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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
   int linha = 1;
   int coluna = 1;

   // cabeçalho
   printf( "ASTERISCO EM XADREZ\n" );

   // enquanto linha menor ou igual a 10 faça
   while( linha <= 10 ) {

      // verifica se a linha é par
      if( linha % 2 == 0 ) // se verdade

         // imprima um espaço em branco primeiro
         printf( " " );

      // enquanto coluna menor ou igual a 10 faça
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

}  // FIM FUNÇÃO MAIN

/*
   Quest�o: 5.19 Exibindo um quadrado de asteriscos. Escreva uma  fun��o que
   apresente um quadrado s�lido de asteriscos  cujo lado � especificado
   no par�metro inteiro side. Por  exemplo, se side � 4, a fun��o exibe:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int quadradoDeAsterisco( int lin, int col );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int linha, coluna;

   // entrada de dados
   printf( "Digite o tamanho da linha: " );
   scanf( "%d", &linha );

   // entrada de dados
   printf( "Digite o tamanho da coluna: " );
   scanf( "%d", &coluna );

   // chama a fun��o quadrado de asterisco
   quadradoDeAsterisco( linha, coluna );

   // pular linha
   printf( "\n" );

   // pausar

   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o quadradoDeAsterisco
int quadradoDeAsterisco( int lin, int col )
{
   // loop para a linha
   for( int i = 1; i <= lin; i++ ) {
      // loop coluna
      for( int j = 1; j <= col; j++ ) {
         printf( "* " );
      }
      printf( "\n" );
   }
}

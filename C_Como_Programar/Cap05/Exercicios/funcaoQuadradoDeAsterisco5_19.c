/*
   Questão: 5.19 Exibindo um quadrado de asteriscos. Escreva uma  função que
   apresente um quadrado sólido de asteriscos  cujo lado é especificado
   no parâmetro inteiro side. Por  exemplo, se side é 4, a função exibe:
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int quadradoDeAsterisco( int lin, int col );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int linha, coluna;

   // entrada de dados
   printf( "Digite o tamanho da linha: " );
   scanf( "%d", &linha );

   // entrada de dados
   printf( "Digite o tamanho da coluna: " );
   scanf( "%d", &coluna );

   // chama a função quadrado de asterisco
   quadradoDeAsterisco( linha, coluna );

   // pular linha
   printf( "\n" );

   // pausar

   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função quadradoDeAsterisco
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

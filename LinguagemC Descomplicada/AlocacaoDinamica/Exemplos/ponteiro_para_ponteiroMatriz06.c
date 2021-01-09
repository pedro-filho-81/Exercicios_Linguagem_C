/*
   Alocação:  Se quisermos alocar um array com mais de uma dimensão
   e manter a notação de colchetes para cada dimensão, precisamos
   utilizar o conceito de “ponteiro para ponteiro”
   Backes, André. Linguagem C (p. 227). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 08/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>3

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // ponteiro com duas dimensões
   int **ptr;

   // cria variáveis
   int i, j, N = 2;

   // alocando memoria com ptr
   ptr = ( int ** ) malloc( N * sizeof( int ) );

   // imprime
   printf( "Cria ponteiro para ponteiro:\n" );
   printf( "ptr = ( int ** ) malloc( N * sizeof( int ) );\n" );

   // imprime
   printf( "\nCria vetor do ponteiro ptr:\n" );
   printf( "ptr[ i ] = ( int * ) malloc( N * sizeof( int ) );\n" );

   // imprime
   printf( "\nEntrada de dados\n" );
   // loop para a linha
   for( i = 0; i < N; i++ )
   {
      // cria um ponteiro vetor
      ptr[ i ] = ( int * ) malloc( i + 1 * sizeof( int ) );

      // loop para receber os valores na matriz
      for( j = 0; j < N; j++ )
      {
         // imprime
         printf( "Digite um valor: " );
         scanf( "%d", &ptr[ i ][ j ] );
      } // fim for coluna
   } // fim for linha

   // imprime
   printf( "\nMatriz de duas dimensões:\n" );
   // loop para mostrar a matriz
   for( i = 0; i < N; i++ )
   {
      for( j = 0; j < N; j++ )
      {
         // imprime
         printf( "%d ", ptr[ i ][ j ] );
      } // fim for coluna

      // pula linha
      printf( "\n" );
   } // fim for linha

   // loop para liberar memoria
   for( i = 0; i < N; i++ )
   {
      // liberar memoria alocada com ptr
      free( ptr[ i ] );
   } // fim for

   // liberar memoria
   free( ptr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

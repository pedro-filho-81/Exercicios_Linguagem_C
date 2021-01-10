/*
   Alocação:
   Auto: Pedro Filho, 09/01/2021
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

   // cria ponteiro de uma dimensão
   int *v; // 1 "*" = 1 nível = 1 dimensão
   int **ptr; // 2 "*" = 2 vivéis = 2 dimensões

   // cria variáveis
   int i, j, nLinhas = 2, nColunas = 2;

   // atribuir valores aos ponteiros
   v  = ( int * ) malloc( nLinhas * nColunas * sizeof( int ) );
   ptr = ( int ** ) malloc( nLinhas * sizeof( int * ) );

   // loop para adicionar valores
   for( i = 0; i < nLinhas; i++ )
   {
      ptr[ i ] = v + i * nColunas;

      for( j = 0; j < nColunas; j++ )
      {
         // entrada de dados
         printf( "%dº valor: " , j + 1);
         scanf( "%d", &ptr[ i ][ j ] );
      } // fim for
   } // fim for

   // loop para mostrar a matriz
   for( i = 0; i < nLinhas; i ++ )
   {
      for( j = 0; j < nColunas; j++ )
      {
         // imprimir
         printf( "%3d", ptr[ i ][ j ] );
      } // fim for

      // pula linha
      printf( "\n" );
   }  // fim for

   // libera memoria
   free( ptr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

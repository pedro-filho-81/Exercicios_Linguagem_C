/*
   Alocação: array multidimensional
   Auto: Pedro Filho, 07/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHA 2
#define COLUNA 2

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria PONTEIRO ptr
   int *ptr;

   // cria variáveis
   int i, j;

   // ponteiro recebe malloc
   ptr = ( int * ) malloc( LINHA * COLUNA * sizeof( int ) );

   // verificar se tem memoria sufucuente
   if( ptr == NULL )
   {
      // mostre
      printf( "ERRO! Memoria insuficiente!" );
      system( "pause" );
      // sair do programa
      exit( 1 );
   } // fim if

   // loop para adicionar valores
   for( i = 0; i < LINHA; i++ )
   {
      // loop da coluna
      for( j = 0; j < COLUNA; j++ )
      {
         // ptr recebe valores
         ptr[ i * LINHA + j ] = i + j;
      } // fim for coluna
   } // fim for linha

   // imprime
   printf( "ptr = " );
   // loop para adicionar valores
   for( i = 0; i < LINHA; i++ )
   {
      // loop da coluna
      for( j = 0; j < COLUNA; j++ )
      {
         // imprime valores
         printf( "%d ", ptr[ i * LINHA + j ] );
      } // fim for coluna
   } // fim for linha

   // libera memoria
   free( ptr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

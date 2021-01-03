/*
   Ponteiros:  Acessando matriz com ponteiro
   Auto: Pedro Filho, 03/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria uma matriz 3 x 3
   int num[ 3 ][ 3 ] = { {1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9, } };

   // cria o ponteiro *numPtr que recebe
   // o endereço da matriz num
   int *numPtr = &num;


   // imprime
   printf( "Mostrando a matriz usando o próprio nome da matriz num[ i ][ j ]\nnum =\n" );

   // loop para mostrar o array num
   for( int i = 0; i < 3; i++ )
   {
      for( int j = 0; j < 3; j++ )
      {
         // imprime a matriz num usando a própria matriz
         printf( "%d ", num[ i ][ j ] );
      } // fim for interno

      // pular linha
      printf( "\n" );
   } // fim for externo

   // imprime
   printf( "\nMostrando a matriz usando o ponteiro *( numPtr + i ): \nnumPtr = " );

   // loop para mostrar a matriz num com o ponteiro numPtr
   for( int i = 0; i < 9; i++ )
   {
      // imprime a matriz num usando o ponteiro numPtr
      printf( "%d ", *( numPtr + i ) );
   } // fim for

   // pular uma linha
   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

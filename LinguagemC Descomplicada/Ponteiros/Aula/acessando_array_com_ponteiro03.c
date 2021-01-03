/*
   Ponteiros: Acessando array com ponteiro e sem ponteiro
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

   // cria o array
   int num[ 5 ] = { 1, 2, 3, 4, 5 };

   // cria o ponteiro *numPtr para inteiro
   // que recebe o endereço do array &num
   int *numPtr = &num;

   // imprime
   printf( "Mostrando o array usando o próprio nome do array num[ i ]\nnum = " );

   // loop para mostrar o array num
   for( int i = 0; i < 5; i++ )
   {
      // imprime o array num usando o próprio array
      printf( "%d ", num[ i ] );
   } // fim for

   // imprime
   printf( "\n\nMostrando o array usando o ponteiro *( numPtr + i ): \nnumPtr = " );

   // loop para mostrar o array num com o ponteiro numPtr
   for( int i = 0; i < 5; i++ )
   {
      // imprime o array num usando o ponteiro numPtr
      printf( "%d ", *( numPtr + i ) );
   } // fim for


   // pular uma linha
   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

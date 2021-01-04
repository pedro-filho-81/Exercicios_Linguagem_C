/*
   Ponteiros: 3) Crie um programa que contenha um array de float
   com 10 elementos. Imprima o endereço de cada posição desse array.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
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

   // cria vetor
   float valores[ 10 ] = {10.5, 2.72, 3.33, 9.8, 8.7, 4.6, 5.1, 88.15, 23.58, 35.29 };

   // cria ponteiro para float e recebe vetor valores
   float *vlPtr = &valores;

   // loop para mostrar os valores do vetor
   for( int i = 0; i < 10; i++ )
   {
      // imprimir
      printf( "O valor %5.2f da posição %2d está no endereço %d\n",
             *( vlPtr + i ), i +1, vlPtr + i );
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

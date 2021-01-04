/*
   Ponteiros: 3) Crie um programa que contenha um array de float
   com 10 elementos. Imprima o endere�o de cada posi��o desse array.
   Backes, Andr�. Linguagem C (p. 213). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 03/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vetor
   float valores[ 10 ] = {10.5, 2.72, 3.33, 9.8, 8.7, 4.6, 5.1, 88.15, 23.58, 35.29 };

   // cria ponteiro para float e recebe vetor valores
   float *vlPtr = &valores;

   // loop para mostrar os valores do vetor
   for( int i = 0; i < 10; i++ )
   {
      // imprimir
      printf( "O valor %5.2f da posi��o %2d est� no endere�o %d\n",
             *( vlPtr + i ), i +1, vlPtr + i );
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

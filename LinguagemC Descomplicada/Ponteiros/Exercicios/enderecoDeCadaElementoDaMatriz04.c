 /*
   Ponteiros: 4) Crie um programa que contenha uma matriz de float
   com três linhas e três colunas. Imprima o endereço de cada
   posição dessa matriz.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 04/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 3
#define COLUNA 3

// FUNÇÃO PRINCIPAL
int  main ()
{
   // configura para português Brasil
   setlocale (LC_ALL, "Portuguese" );

   // cria matriz 3x3
   float matriz[LINHA][COLUNA] = { 1.2, 2.11 , 3.22 , 4.34 , 5.51 , 6.28 , 7.91 , 8.45 , 9.01 , 10.87 };

   // CRIA O ponteiro que recebe o endereço da matriz
   float *mtzPtr = &matriz;

   // imprimir cabeçalho
   printf ( "\tMATRIZ 3 x 3\n" );
   // loop para mostrar uma matriz
   for ( int i = 0; i < LINHA; i++)
   {
      for ( int j = 0 ; j < COLUNA; j++)
      {
         // imprimir os elementos da matriz usando o ponteiro
         printf ( "%7.2f", *( mtzPtr + i ) );
      } // fim para

      // pular linha
      printf ( "\n" );
   } // fim para linha

   printf ( "\nValores e endereços da matriz.\n" );
   // loop para mostrar os elementos e
   // endereços usando o ponteiro
   for ( int i = 0; i < LINHA * COLUNA; i++)
   {
      // imprimir
      printf ( "O valor %5.2f está  no endereço %d\n" ,
             *( mtzPtr + i ), mtzPtr + i );
   } // fim para

   // pular uma linha
   printf ( "\n" );

   // pausar
   system ( "pause" );

   // fim do programa
   return  0 ;

}   // FIM FUNÇÃO PRINCIPAL

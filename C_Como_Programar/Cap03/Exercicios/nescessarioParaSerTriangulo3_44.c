/*
   Quest�o: 3.44 Lados de um tri�ngulo. Escreva um programa que leia  tr�s
   valores float diferentes de zero, determine e imprima se eles poderiam
   representar os lados de um tri�ngulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edi��o do Kindle.
   Autor: @Pedro Filho, 19/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int ladoA = 0;
   int ladoB = 0;
   int ladoC = 0;

   // entrada de dados
   printf( "Digite os 3 lados do tri�ngula: " );
   scanf( "%d%d%d", &ladoA, &ladoB, &ladoC );

   // se ladoA menos ladoB menor que ladoC
   if( (ladoB + ladoC ) > ladoA )

      // se ladoA menos ladoB menor que ladoC
      if( (ladoA + ladoB ) > ladoC )

         // se ladoA menos ladoB menor que ladoC
         if( (ladoA + ladoC ) > ladoB ) {
            // imprima
            printf( "Pode ser um tri�ngulo.\n" );
         } // fim if 3

         // se n�o
         else {
            // imprima
            printf( "N�O pode ser um tri�ngulo.\n" );
         } // fim else

      // se n�o
      else {
         // imprima
         printf( "N�O pode ser um tri�ngulo.\n" );
      } // fim else

   // se n�o
   else {
      // imprima
      printf( "N�O pode ser um tri�ngulo.\n" );
   } // fim else

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

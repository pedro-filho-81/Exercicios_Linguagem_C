/*
   Questão: 3.44 Lados de um triângulo. Escreva um programa que leia  três
   valores float diferentes de zero, determine e imprima se eles poderiam
   representar os lados de um triângulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 78). Edição do Kindle.
   Autor: @Pedro Filho, 19/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int ladoA = 0;
   int ladoB = 0;
   int ladoC = 0;

   // entrada de dados
   printf( "Digite os 3 lados do triângula: " );
   scanf( "%d%d%d", &ladoA, &ladoB, &ladoC );

   // se ladoA menos ladoB menor que ladoC
   if( (ladoB + ladoC ) > ladoA )

      // se ladoA menos ladoB menor que ladoC
      if( (ladoA + ladoB ) > ladoC )

         // se ladoA menos ladoB menor que ladoC
         if( (ladoA + ladoC ) > ladoB ) {
            // imprima
            printf( "Pode ser um triângulo.\n" );
         } // fim if 3

         // se não
         else {
            // imprima
            printf( "NÃO pode ser um triângulo.\n" );
         } // fim else

      // se não
      else {
         // imprima
         printf( "NÃO pode ser um triângulo.\n" );
      } // fim else

   // se não
   else {
      // imprima
      printf( "NÃO pode ser um triângulo.\n" );
   } // fim else

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

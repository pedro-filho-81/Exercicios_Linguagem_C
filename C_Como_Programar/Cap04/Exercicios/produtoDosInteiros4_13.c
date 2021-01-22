/*
   Quest�o:4.13 Calculando o produto de inteiros �mpares. Escreva um programa
   que calcule e imprima o produto dos  inteiros �mpares de 1 a 15.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 22/01/2021
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

   // vari�vel
   int produto = 0;

   // imprima
   printf( "Valores �mpares: " );

   // loop para o produto
   for( int i = 1; i <= 15; i++ ) {

      // se i for �mpar
      if( i % 2 != 0 ) {

         // imprimir
         printf( "%d ", i );

         // calcular o produto dos �mpares
         produto *= i;

      } // fim if
   } // fim for

   // imprima
   printf( "O produto dos valores �mpares � %d\n\n", produto );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

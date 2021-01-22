/*
   Questão:4.13 Calculando o produto de inteiros ímpares. Escreva um programa
   que calcule e imprima o produto dos  inteiros ímpares de 1 a 15.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 22/01/2021
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

   // variável
   int produto = 0;

   // imprima
   printf( "Valores ímpares: " );

   // loop para o produto
   for( int i = 1; i <= 15; i++ ) {

      // se i for ímpar
      if( i % 2 != 0 ) {

         // imprimir
         printf( "%d ", i );

         // calcular o produto dos ímpares
         produto *= i;

      } // fim if
   } // fim for

   // imprima
   printf( "O produto dos valores ímpares é %d\n\n", produto );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

/*
   Quest�o: 4.12 Calculando a soma de inteiros pares. Escreva um  programa
   que calcule e imprima a soma dos inteiros pares de 2 a 30.
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
   int soma = 0;

   // imprima
   printf( "Valores pares: " );

   // loop para contar n�meros
   for( int i = 2; i <= 30; i++ ) {

      // se valor o valor � par
      if( i % 2 == 0 ) {

         // imprima
         printf( "%d ", i );

         // somar valores
         soma += i;

      } // fim if
   } // fim for

   // imprima o resultado
   printf( "\nA soma dos valores pares � %d\n\n", soma );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

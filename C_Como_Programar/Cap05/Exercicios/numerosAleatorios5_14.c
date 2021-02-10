/*
   Quest�o: 5.14 Para cada um dos conjuntos de inteiros a seguir, escreva
   uma �nica instru��o que imprima um n�mero aleatoriamente a partir do conjunto.
   a) 2, 4, 6, 8, 10.
   b) 3, 5, 7, 9, 11.
   c) 6, 10, 14, 18, 22.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 153). Edi��o do Kindle.
   Autor: @Pedro Filho, 09/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int i, num = 0;

   // gerador
   srand( time( NULL ) );

   // imprimir
   printf( "A) " );

   // loop for para gerar i imprimir n�meros aleat�rios
   for( i = 1; i <= 10; i++ )
   {
      // gera n�meros aleat�rios
      num = 1 + rand() % 10;

      // verifica o tipo do n�mero gerado
      if( num % 2 == 0 ) {

         // imprime o n�mero gerado
         printf( "%d ", num );
      } // fim if

   } // fim for

   // imprimir
   printf( "\nB) " );

   // loop for para gerar i imprimir n�meros aleat�rios
   for( i = 3; i <= 11; i++ )
   {
      // gera n�meros aleat�rios
      num = 1 + rand() % 11;

      // verifica o tipo do n�mero gerado
      if( num >= 3 && num % 2 == 1 && num <= 11 ) {

         // imprime o n�mero gerado
         printf( "%d ", num );
      } // fim if

   } // fim for
   // imprimir
   printf( "\nC) " );

   // loop for para gerar i imprimir n�meros aleat�rios
   for( i = 6; i <= 22; i++ )
   {
      // gera n�meros aleat�rios
      num = 1 + rand() % 22;

      // verifica o tipo do n�mero gerado
      if( num >= 6 && num % 4 == 0 && num <= 22 ) {

         // imprime o n�mero gerado
         printf( "%d ", num );
      } // fim if

   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

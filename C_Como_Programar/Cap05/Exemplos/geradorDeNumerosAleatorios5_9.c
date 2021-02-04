/*
   Quest�o: Fig. 5.9: fig05_09.c  2 Randomizando o programa de lan�amento de dado
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 128). Edi��o do Kindle.
   @Pedro Filho, 04/02/2021
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

   // vari�vel contador
   unsigned semente; // gerador de n�meros aleat�rios

   // entrada de dados
   printf( "Digite a semente: ");
   scanf( "%d", &semente );

   // gerador de n�meros aleat�rios
   srand( semente );

   // loop for para 10 repeti��es
   for( int i = 1; i <= 10; i++ )
   {
      // imprima
      printf( "%10d", 1 + ( rand() % 6 ) );

      // se i igual a 5 pular uma linha
      if( i % 5 == 0 ) printf( "\n" );

   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

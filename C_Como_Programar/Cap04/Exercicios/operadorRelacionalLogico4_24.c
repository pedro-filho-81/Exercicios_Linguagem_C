/*
   Questão:  Operadores relacionais e lógicos
   Autor: @Pedro Filho, 29/01/2021
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
   int i = 1, j = 2, k = 3, m = 2;

   // cabeçalho
   printf( "\tOPERADORES RELACIONAIS & LÓGICOS\n" );
   printf( "\t1 = VERDADE  /  0 = FALSO\n\n" );
   printf( "Dado as variáveis: int i = 1, j = 2, k = 3, m = 2;\n" );

   // imprime
   printf( "Analisando afirmo:\n" );
   printf( "\ti == 1 - (%d)\n", i == 1 );
   printf( "\tj == 3 - (%d)\n", j == 3 );
   printf( "\ti >= 1 && j < 4 - (%d)\n", i >= 1 && j < 4 );
   printf( "\tm <= 99 && k < m - (%d)\n", m <= 99 && k < m );
   printf( "\tj >= i || k == m - (%d)\n", j >= i || k == m );
   printf( "\tk + m < j || 3 - j >= k - (%d)\n", k + m < j || 3 - j >= k );
   printf( "\t!m - (%d)\n", !m );
   printf( "\t!( j - m ) - (%d)\n", !( j - m ) );
   printf( "\t!( k > m ) - (%d)\n", !( k > m ) );
   printf( "\t!( j > k ) - (%d)\n", !( j > k ) );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

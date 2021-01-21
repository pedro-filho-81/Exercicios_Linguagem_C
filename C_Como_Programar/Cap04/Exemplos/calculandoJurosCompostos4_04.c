/*
   Quest�o: /* Fig. 4.6: fig04_06.c  2 Calculando juros compostos
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 87). Edi��o do Kindle.
   @Pedro Filho, 20/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   double valor; // valor em dep�sito
   double principal = 1000.00; // principal inicial
   double taxa = 0.05; // taxa de juros anual
   int ano; // contador do ano

   // cabe�alho
   printf( "%4s%21s", "Ano", "Valor da conta\n" );

   // loop paara calcular o valor em dep�sito pelos 10 anos
   for( ano = 1; ano <= 10; ano++ ) {

      // calcula novo valor para cada ano especificado
      valor = principal * pow( 1.0 + taxa, ano );

      // imprime os resultados
      printf( "%3d%18.2f\n", ano, valor );
   }

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

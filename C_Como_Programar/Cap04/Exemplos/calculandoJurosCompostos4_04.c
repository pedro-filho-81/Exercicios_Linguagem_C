/*
   Questão: /* Fig. 4.6: fig04_06.c  2 Calculando juros compostos
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 87). Edição do Kindle.
   @Pedro Filho, 20/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   double valor; // valor em depósito
   double principal = 1000.00; // principal inicial
   double taxa = 0.05; // taxa de juros anual
   int ano; // contador do ano

   // cabeçalho
   printf( "%4s%21s", "Ano", "Valor da conta\n" );

   // loop paara calcular o valor em depósito pelos 10 anos
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

}  // FIM FUNÇÃO MAIN

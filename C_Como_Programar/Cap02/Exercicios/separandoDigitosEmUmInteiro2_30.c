/*
   Questão: 2.30 Separando dígitos em um inteiro. Escreva um programa que leia
   um número de cinco dígitos, separe o número  em dígitos individuais
   e imprima os dígitos separados um  do outro por três espaços cada um.
   [Dica: use combinações  da divisão inteira e da operação módulo.]
   Por exemplo, se o  usuário digitar 42139, o programa deverá exibir
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edição do Kindle.
   Autor: Pedro Filho, 13/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variaveis
   int num, a, b, c, d, e;


   // entrada de dados
   printf( "digite um número entre 1 99999: " );
   scanf( "%d", &num );

   // calcular
   a = num / 10000 % 1000;
   b = num % 10000 / 1000;
   c = num % 1000 / 100;
   d = num % 100 / 10;
   e = num % 10;

   printf( "\nNúmeros separados: %d %d %d %d %d\n", a, b, c, d, e );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

/*
   2) Escreva um programa que leia um número inteiro e depois o imprima.
   Backes, André. Linguagem C (p. 47). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 11/01/2021
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

   // variável
   int num;

   // entrada de dados
   printf( "Digite um número:" );
   scanf( "%d", &num );

   // imprimir
   printf( "Você digitou o número %d\n", num );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

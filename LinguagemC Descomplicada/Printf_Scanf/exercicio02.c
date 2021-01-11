/*
   3) Escreva um programa que leia um número inteiro e depois
   imprima a mensagem “Valor lido:”, seguido do valor inteiro.
   Use apenas um comando printf().
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
   scanf( "%d", &num );

   // imprimir
   printf( "Valor lido %d\n", num );


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

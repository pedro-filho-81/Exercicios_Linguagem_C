/*
   Ponteiros: 5) Crie um programa que contenha um array de inteiros
   com cinco elementos. Utilizando apenas aritmética de ponteiros,
   leia esse array do teclado e imprima o dobro de cada valor lido.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 03/01/2021
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

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

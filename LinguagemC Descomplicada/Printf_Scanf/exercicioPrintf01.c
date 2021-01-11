/*
   1) Elabore um programa que escreva as mensagens “Início do programa”
   e “Fim” na tela, uma em cada linha, usando apenas um comando printf().
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

   // imprimir
   printf( "Início do programa \nFim do programa.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

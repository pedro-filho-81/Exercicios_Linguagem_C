/*
   1) Elabore um programa que escreva as mensagens �In�cio do programa�
   e �Fim� na tela, uma em cada linha, usando apenas um comando printf().
   Backes, Andr�. Linguagem C (p. 47). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 11/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // imprimir
   printf( "In�cio do programa \nFim do programa.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

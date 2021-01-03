/*
   Ponteiros: 1) Escreva um programa que contenha duas vari�veis inteiras.
   Compare seus endere�os e exiba o maior endere�o.
   Backes, Andr�. Linguagem C (p. 212). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 03/01/2021
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

   //vari�veis
   int n1 = 5, n2 = 10;

   // cria ponteiro *n1Ptr e recebe o endere�o da vari�vel n1
   int *n1Ptr = &n1;

   // cria ponteiro *n2Ptr e recebe o endere�o da vari�vel n2
   int *n2Ptr = &n2;

   // verifica se o endere�o da vari�vel n1 � maior que n2
   // atrav�s dos ponteiros n1Ptr e n2Ptr
   if( n1Ptr > n2Ptr )

      // imprima que n1Ptr � o maior
      printf( "O endere�o da vari�vel n1 = %d � maior que"
             "\no endere�o da vari�vel n2 = %d\n", n1Ptr, n2Ptr );

   // se n�o
   else

      // imprima que n2Ptr � o maior
      printf( "O endere�o da vari�vel n2 = %d � maior que"
             "\no endere�o da vari�vel n1 = %d\n", n2Ptr, n1Ptr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

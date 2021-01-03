/*
   Ponteiros: 1) Escreva um programa que contenha duas variáveis inteiras.
   Compare seus endereços e exiba o maior endereço.
   Backes, André. Linguagem C (p. 212). GEN LTC. Edição do Kindle.
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

   //variáveis
   int n1 = 5, n2 = 10;

   // cria ponteiro *n1Ptr e recebe o endereço da variável n1
   int *n1Ptr = &n1;

   // cria ponteiro *n2Ptr e recebe o endereço da variável n2
   int *n2Ptr = &n2;

   // verifica se o endereço da variável n1 é maior que n2
   // através dos ponteiros n1Ptr e n2Ptr
   if( n1Ptr > n2Ptr )

      // imprima que n1Ptr é o maior
      printf( "O endereço da variável n1 = %d é maior que"
             "\no endereço da variável n2 = %d\n", n1Ptr, n2Ptr );

   // se não
   else

      // imprima que n2Ptr é o maior
      printf( "O endereço da variável n2 = %d é maior que"
             "\no endereço da variável n1 = %d\n", n2Ptr, n1Ptr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

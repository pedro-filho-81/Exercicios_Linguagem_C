/*
   Ponteiros:
   Auto: Pedro Filho, 02/01/2021
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

   // criando uma variável com um valor
   int n = 10;

   // criando um ponteiro de inteiro para a variável n
   int *nPtr;

   // atribuindo o endereço de n ao ponteiro
   nPtr = &n;

   printf( "\n{ PONTEIROS: DECLARANDO INICIALIZANDO MOSTRANDO }\n" );

   // mostrando o endereço de variável n
   printf( "Conteúdo da variável - int n = %d\n", n );

   // mostrar atribuindo o endereço da var ao ponteiro
   printf( "Ponteiro recebe o endereço da variável n - int *nPtr = &n \n");

   // mostrando o endereço da variável n
   printf( "O endereço da variável n com o ponteiro nPtr é %p\n", nPtr );

   // mostrando o endereço da variável n com %d
   printf( "O endereço da variável n com inteiro nPtr %d\n", nPtr );

   // mostrando o valor da variável n com o ponteiro nPtr
   printf( "O valor da variável n com o ponteiro *nPtr é %d\n", *nPtr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

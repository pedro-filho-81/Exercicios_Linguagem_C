/*
   Ponteiros:
   Auto: Pedro Filho, 02/01/2021
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

   // criando uma vari�vel com um valor
   int n = 10;

   // criando um ponteiro de inteiro para a vari�vel n
   int *nPtr;

   // atribuindo o endere�o de n ao ponteiro
   nPtr = &n;

   printf( "\n{ PONTEIROS: DECLARANDO INICIALIZANDO MOSTRANDO }\n" );

   // mostrando o endere�o de vari�vel n
   printf( "Conte�do da vari�vel - int n = %d\n", n );

   // mostrar atribuindo o endere�o da var ao ponteiro
   printf( "Ponteiro recebe o endere�o da vari�vel n - int *nPtr = &n \n");

   // mostrando o endere�o da vari�vel n
   printf( "O endere�o da vari�vel n com o ponteiro nPtr � %p\n", nPtr );

   // mostrando o endere�o da vari�vel n com %d
   printf( "O endere�o da vari�vel n com inteiro nPtr %d\n", nPtr );

   // mostrando o valor da vari�vel n com o ponteiro nPtr
   printf( "O valor da vari�vel n com o ponteiro *nPtr � %d\n", *nPtr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

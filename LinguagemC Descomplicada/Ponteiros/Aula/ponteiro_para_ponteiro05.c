/*
   Ponteiros: criar um ponteiro para ponteiro
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

   // cria uma vari�vel e atribuir um valor para ela
   int num = 10;

   // cria um ponteiro que recebe o endere�o da vari�vel
   int *numPtr = &num;

   // cria um ponteiro que recebe o endere�o do ponteiro
   int **ptrPtr = &numPtr;

   // cabe�alho
   printf( "{ PONTEIRO PARA PONTEIRO {\n" );

   // imprimir a vari�vel
   printf( "int num = 10 - mostra o valor da vari�vel   num = %d\n", num );

   // imprime o endere�o de num com o ponteiro numPtr
   printf( "\nint *numPtr = &num - mostra o endere�o de num "
          "\ncom o ponteiro numPtr = %p\n", numPtr );

   // imprime o valor de num com o ponteiro numPtr
   printf( "\nMostra o valor de num com o ponteiro *numPtr = %d\n", *numPtr );

   // imprime o endere�o do ponteiro *numPtr com o ponteiro **ptrPtr
   printf( "\nint **ptrPtr = &numPtr \nImprime o endere�o do ponteiro *numPtr"
          "\ncom o ponteiro para ponteiro **ptrPtr = %p\n", ptrPtr );

   // imprime o endere�o do ponteiro *numPtr com o ponteiro **ptrPtr
   printf( "\nint **ptrPtr = &numPtr \nImprime o valor do ponteiro *numPtr"
          "\ncom o ponteiro para ponteiro **ptrPtr = %d\n", **ptrPtr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

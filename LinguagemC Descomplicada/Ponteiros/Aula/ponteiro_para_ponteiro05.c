/*
   Ponteiros: criar um ponteiro para ponteiro
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

   // cria uma variável e atribuir um valor para ela
   int num = 10;

   // cria um ponteiro que recebe o endereço da variável
   int *numPtr = &num;

   // cria um ponteiro que recebe o endereço do ponteiro
   int **ptrPtr = &numPtr;

   // cabeçalho
   printf( "{ PONTEIRO PARA PONTEIRO {\n" );

   // imprimir a variável
   printf( "int num = 10 - mostra o valor da variável   num = %d\n", num );

   // imprime o endereço de num com o ponteiro numPtr
   printf( "\nint *numPtr = &num - mostra o endereço de num "
          "\ncom o ponteiro numPtr = %p\n", numPtr );

   // imprime o valor de num com o ponteiro numPtr
   printf( "\nMostra o valor de num com o ponteiro *numPtr = %d\n", *numPtr );

   // imprime o endereço do ponteiro *numPtr com o ponteiro **ptrPtr
   printf( "\nint **ptrPtr = &numPtr \nImprime o endereço do ponteiro *numPtr"
          "\ncom o ponteiro para ponteiro **ptrPtr = %p\n", ptrPtr );

   // imprime o endereço do ponteiro *numPtr com o ponteiro **ptrPtr
   printf( "\nint **ptrPtr = &numPtr \nImprime o valor do ponteiro *numPtr"
          "\ncom o ponteiro para ponteiro **ptrPtr = %d\n", **ptrPtr );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

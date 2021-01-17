/*
   Quest�o:3.23 Imprimindo n�meros por um loop. Escreva um  programa que
   utilize o looping para imprimir os n�meros de 1 a 10 lado a lado na mesma
   linha, com tr�s espa-  �os entre os n�meros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edi��o do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int num = 1; //

   // loop while para imprimir de 1 a 10
   // enquanto num menor ou igual a 10 fa�a
   while( num <= 10)
   {
      // imprime
      printf( "%3d", num );

      // p�s-incremento
      num++;

   }  // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

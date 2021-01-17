/*
   Questão:3.23 Imprimindo números por um loop. Escreva um  programa que
   utilize o looping para imprimir os números de 1 a 10 lado a lado na mesma
   linha, com três espa-  ços entre os números.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edição do Kindle.
   Autor: Pedro Filho, 17/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int num = 1; //

   // loop while para imprimir de 1 a 10
   // enquanto num menor ou igual a 10 faça
   while( num <= 10)
   {
      // imprime
      printf( "%3d", num );

      // pós-incremento
      num++;

   }  // fim while

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

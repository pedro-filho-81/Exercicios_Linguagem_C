/*
   Quest�o: 3.26 Sa�da tabular. Escreva um programa que use o looping para
   produzir a seguinte tabela de valores:
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

   // cria vari�vel
   int num = 3;
   int contador = 1;

   // cabe�alho
   printf( "\t A\tA+2\tA+4\tA+6\n" );
   // loop while para contar de 1 at� 10
   while( contador <= 5 )
   {
      // imprimir
      printf( "\t%2d\t%2d\t%2d\t%2d\n", num, num + 2, num + 4, num + 6 );

      // num recebe 3
      num += 3;

      // contador
      contador++; // incrementa

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

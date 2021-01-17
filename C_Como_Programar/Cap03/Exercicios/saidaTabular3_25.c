/*
   Quest�o: 3.25 Sa�da tabular. Escreva um programa que use o looping  para
   imprimir a tabela de valores a seguir. Use a sequ�ncia  de escape de
   tabula��o, \t, na instru��o printf para separar as colunas com tabula��es.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 75). Edi��o do Kindle.
   Autor: Pedro Filho, 15/01/2021
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
   int num = 1;

   // cabe�alho
   printf( "\tN\t10*N\t100*N\t1000*N\n" );
   // loop while para contar de 1 at� 10
   while( num <= 10 )
   {
      // imprimir
      printf( "\t%d\t%d\t%d\t%d\n", num, num * 10, num * 100, num * 1000 );

      // contador
      num++; // incrementa num

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

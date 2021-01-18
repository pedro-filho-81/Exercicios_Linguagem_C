/*
   Quest�o: exercicio 3_30.
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

   // vari�veis
   int linha = 10;
   int coluna = 0;

   // enquanto linha maior ou igual a um fa�a
   while( linha >= 1 ) {

      // coluna recebe 1
      coluna = 1;

      // enquando coluna menor que 10 fa�a
      while( coluna <= 10 ){

         // imprima
         printf( "%s", linha % 2 ? "<" : ">" );

         // incrementa contador
         coluna++;

      }  // fin while

      // decrementa linha
      linha--;

   } // fim while linha

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

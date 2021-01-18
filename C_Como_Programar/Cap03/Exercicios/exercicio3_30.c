/*
   Questão: exercicio 3_30.
   Autor: Pedro Filho, 15/01/2021
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

   // variáveis
   int linha = 10;
   int coluna = 0;

   // enquanto linha maior ou igual a um faça
   while( linha >= 1 ) {

      // coluna recebe 1
      coluna = 1;

      // enquando coluna menor que 10 faça
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

}  // FIM FUNÇÃO MAIN

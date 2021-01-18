/*
   Questão:
   Autor: Pedro Filho, 18/01/2021
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

   // cria variável
   int contador = 1;

   // enquanto contador menor que 10 faça
   while( contador <= 10 ) {

      // imprima
      // verificar quando contador é par ou ímpar
      printf( "%s\n", contador % 2 ? "****" : "++++++++" );

      // incrementa contador
      contador++;

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

/*
   Quest�o:
   Autor: Pedro Filho, 18/01/2021
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
   int contador = 1;

   // enquanto contador menor que 10 fa�a
   while( contador <= 10 ) {

      // imprima
      // verificar quando contador � par ou �mpar
      printf( "%s\n", contador % 2 ? "****" : "++++++++" );

      // incrementa contador
      contador++;

   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Quest�o: Figura 4.1: fig04_01.c  2 Repeti��o controlada por contador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 81). Edi��o do Kindle.
   @Pedro Filho, 20/01/2021
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
   int contador = 1; // inicializando

   // enquanto contador menor ou igual a 10 fa�a
   while( contador <= 10) {

      // imprima
      printf( "%d\n", contador );

      // incrementa o contador em 1
      contador++;

   }  // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

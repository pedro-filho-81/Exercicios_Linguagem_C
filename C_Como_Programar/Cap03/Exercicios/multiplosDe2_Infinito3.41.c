/*
   Quest�o: 3.41 M�ltiplos de 2 com um loop infinito. Escreva um programa que
   continue imprimindo os m�ltiplos do inteiro 2,  a saber 2, 4, 8, 16, 32, 64
   e assim por diante. Seu loop n�o  dever� terminar (ou seja, voc� dever� criar
   um loop infinito). O que acontece quando voc� executa esse programa?
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 19/01/2021
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
   int contador = 2;

   // LOOP INFINITO DOS MULTIPLOS DE 2
   // enquanto contador for multiplos de dois fa�a
   while( contador % 2 == 0 ) {

      // imprima contador
      printf( "%d ", contador );

      // contador recebe dois
      contador += 2;

   } // fin while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Questão: Figura 4.1: fig04_01.c  2 Repetição controlada por contador
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 81). Edição do Kindle.
   @Pedro Filho, 20/01/2021
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
   int contador = 1; // inicializando

   // enquanto contador menor ou igual a 10 faça
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

}  // FIM FUNÇÃO MAIN

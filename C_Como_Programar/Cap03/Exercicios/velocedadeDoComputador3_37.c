/*
   Questão: 3.37 Qual é a velocidade do seu computador? Como  você pode
   determinar a velocidade com que seu computador realmente opera? Escreva
   um programa com um  loop while que conte de 1 até 300.000.000 em intervalos
   de 1. Toda vez que o contador atingir um múltiplo  de 100.000.000, mostre
   esse número na tela. Use seu  relógio para marcar o tempo gasto entre cada
   repetição  do loop por 100 milhões de vezes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edição do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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
   int contador = 1; // para while

   // loop par contar até 300.000.000
   while( contador < 300000000 ) {

      // se contadador igual a 100000000
      if( contador == 100000000 ) {

         // imprima
         printf( "Chagamos a 100.000.000\n" );

      } // fim if
   } // fim while

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

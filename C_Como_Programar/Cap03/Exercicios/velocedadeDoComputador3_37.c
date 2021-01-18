/*
   Quest�o: 3.37 Qual � a velocidade do seu computador? Como  voc� pode
   determinar a velocidade com que seu computador realmente opera? Escreva
   um programa com um  loop while que conte de 1 at� 300.000.000 em intervalos
   de 1. Toda vez que o contador atingir um m�ltiplo  de 100.000.000, mostre
   esse n�mero na tela. Use seu  rel�gio para marcar o tempo gasto entre cada
   repeti��o  do loop por 100 milh�es de vezes.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 77). Edi��o do Kindle.
   Autor: @Pedro Filho, 18/01/2021
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
   int contador = 1; // para while

   // loop par contar at� 300.000.000
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

}  // FIM FUN��O MAIN

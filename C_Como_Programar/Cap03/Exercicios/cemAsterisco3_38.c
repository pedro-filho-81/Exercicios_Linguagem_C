/*
   Questão: 3.38 Escreva um programa que imprima 100 asteriscos, um de  cada vez.
   Após cada décimo asterisco, seu programa deverá imprimir um caractere de
   nova linha. [Dica: conte de 1  até 100. Use o operador de módulo para
   reconhecer cada  vez que o contador atingir um múltiplo de 10.]
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
   int contador = 0;

   // COlocar cores nas letras e tela
   system( "color 2"); // aqui tela preta com letras verdes

   // cabeçalho
   printf( "QUADRADO DE ASTERISCO\n" );

   // loop para imprimir 100 asterisco
   while( contador < 100 ) {

      // se contador multiplo de 10 pule uma linha
      if( contador % 10 == 0 ) {

         // pule uma linha
         printf( "\n" );

      } // fim if

      // imprimir
      printf( "* " );

      // incrementa contador
      contador++;

   } // fim while

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

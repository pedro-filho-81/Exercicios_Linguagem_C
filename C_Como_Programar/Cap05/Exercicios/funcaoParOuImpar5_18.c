/*
   Questão: 5.18 Par ou ímpar. Escreva um programa que inclua uma  série de
   inteiros e os passe um de cada vez à função  even, que usa o operador de
   módulo para determinar  se um inteiro é par. A função deverá usar um
   argumento  inteiro e retornar 1 se o inteiro for par, e retornar 0 se
   o  inteiro for ímpar.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int parOuImpar( int num );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int numero = 0;
   int resposta = 0;

   // loop para gerar números de 1 a 10
   for( int i = 0; i <= 10; i++ ) {
      // resposta recebe e chama a função par ímpar
      resposta = parOuImpar( i );

      // se resposta igual a 1
      if( resposta == 1 )
         // imprime
         printf( "%2d é par.\n", i );

      // se não
      else
         // imprime
         printf( "%2d é ímpar.\n", i );

   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função parOuImpar
int parOuImpar( int num )
{
   // verificar se é par
   if( num % 2 == 0 ) {
      return 1;
   } // fim num

   // se não
   else {
      return 0;
   }// fim else

} // fim função

/*
   Quest�o: 5.18 Par ou �mpar. Escreva um programa que inclua uma  s�rie de
   inteiros e os passe um de cada vez � fun��o  even, que usa o operador de
   m�dulo para determinar  se um inteiro � par. A fun��o dever� usar um
   argumento  inteiro e retornar 1 se o inteiro for par, e retornar 0 se
   o  inteiro for �mpar.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 11/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int parOuImpar( int num );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int numero = 0;
   int resposta = 0;

   // loop para gerar n�meros de 1 a 10
   for( int i = 0; i <= 10; i++ ) {
      // resposta recebe e chama a fun��o par �mpar
      resposta = parOuImpar( i );

      // se resposta igual a 1
      if( resposta == 1 )
         // imprime
         printf( "%2d � par.\n", i );

      // se n�o
      else
         // imprime
         printf( "%2d � �mpar.\n", i );

   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o parOuImpar
int parOuImpar( int num )
{
   // verificar se � par
   if( num % 2 == 0 ) {
      return 1;
   } // fim num

   // se n�o
   else {
      return 0;
   }// fim else

} // fim fun��o

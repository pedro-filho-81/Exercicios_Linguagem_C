/* Função: Par ou ímpar. Escreva um programa que inclua uma série de inteiros
   e os passe um de cada vez à função even, que usa o operador de módulo para
   determinar se um inteiro é par. A função deverá usar um argumento inteiro
   e retornar 1 se o inteiro for par, e retornar 0 se o inteiro for ímpar.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 154).  . Edição do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int par_impar( int x );

// função principal
int main()
{
   // seleciona o idioma Português
   setlocale(LC_ALL, "Portuguese" );

   // loop para verificar qual número é par ou impar
   for( int i = 0; i <= 15; i++ )
   {
      if( par_impar( i ) == 1 )
         printf( "\t%d é par.  ", i );
      else
         printf( "\t%d é ímpar.\n", i );

   } // fim for

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// function par_impar
int par_impar( int x )
{
   // verificar se o número é par ou impar
   if( x % 2 == 0 )
      return 1;
   else
      return 0;

} // fim função par_impar

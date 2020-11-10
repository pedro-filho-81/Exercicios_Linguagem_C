/* Fun��o: Par ou �mpar. Escreva um programa que inclua uma s�rie de inteiros
   e os passe um de cada vez � fun��o even, que usa o operador de m�dulo para
   determinar se um inteiro � par. A fun��o dever� usar um argumento inteiro
   e retornar 1 se o inteiro for par, e retornar 0 se o inteiro for �mpar.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (P�gina 154).  . Edi��o do Kindle.
   Pedro Filho, 09/11/2020*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int par_impar( int x );

// fun��o principal
int main()
{
   // seleciona o idioma Portugu�s
   setlocale(LC_ALL, "Portuguese" );

   // loop para verificar qual n�mero � par ou impar
   for( int i = 0; i <= 15; i++ )
   {
      if( par_impar( i ) == 1 )
         printf( "\t%d � par.  ", i );
      else
         printf( "\t%d � �mpar.\n", i );

   } // fim for

    printf( "\n" ); // pula linha

   system( "pause" ); // pausa o sistema

   return 0; // fim do programa

} // fim main

// function par_impar
int par_impar( int x )
{
   // verificar se o n�mero � par ou impar
   if( x % 2 == 0 )
      return 1;
   else
      return 0;

} // fim fun��o par_impar

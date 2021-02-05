/*
   Questão:Fig. 5.14: fig05_14.c  2 Função recursiva fatorial
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 139). Edição do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
long fatorial( long numero );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int i = 0;

   printf( "FATORIAL\n" ); // cabeçalho

   // loop para mostrar o resultado
   for( i = 0; i <= 10; i++ ) {
      // imprima
      printf( "%2d! = %1d\n", i, fatorial( i )  );
   } // fim for

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função fatorial
long fatorial( long numero )
{
   // se numero igual a 0 ou 1
   if( numero == 0 || numero == 1 )
      return 1; // retorne 1
   else
      // retorne o número vezes a função fatorial menos 1
      return ( numero * fatorial( numero - 1) ) ;
} // fim função fatorial

/*
   Quest�o: /* Fig. 4.5: fig04_05.c  2 Somat�rio com for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 86). Edi��o do Kindle.
   @Pedro Filho, 20/01/2021
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

   // vari�veis
   int soma = 0; // inicializa soma
   int numero;

   // imprima
   printf( "N�meros = " );

   // loop for
   for( numero = 2; numero <= 100; numero += 2 ) {

      // adiciona n�mero a soma
      soma += numero;

      // imprima os n�meros
      printf( "%d ", numero );

   }  // fim for

   // imprima resultado
   printf( "\nA soma � %d\n\n", soma );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

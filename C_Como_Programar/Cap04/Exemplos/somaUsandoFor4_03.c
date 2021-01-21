/*
   Questão: /* Fig. 4.5: fig04_05.c  2 Somatório com for
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 86). Edição do Kindle.
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

   // variáveis
   int soma = 0; // inicializa soma
   int numero;

   // imprima
   printf( "Números = " );

   // loop for
   for( numero = 2; numero <= 100; numero += 2 ) {

      // adiciona número a soma
      soma += numero;

      // imprima os números
      printf( "%d ", numero );

   }  // fim for

   // imprima resultado
   printf( "\nA soma é %d\n\n", soma );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

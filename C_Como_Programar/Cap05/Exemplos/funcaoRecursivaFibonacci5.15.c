/*
   Questão: /* Fig. 5.15: fig05_15.c  2 Função recursiva fibonacci
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 141). Edição do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
long fibonacci( long numero );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   long resultado = 0;
   long num = 0;

   // entrada de dados
   printf( "Digite um inteiro: " );
   scanf( "%d", &num );

   // resultado recebe o valor da função fibonacci
   resultado = fibonacci( num );

   // mostrar o resultado
   printf( "Fibonacci( %ld ) = %ld\n", num, resultado );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função fibonacci
long fibonacci( long numero )
{
   // se número igual a zero ou um
   if( numero == 0 || numero == 1 )
      // retorne o número
      return numero;
   // se não
   else
      // retorne fibonacci
      return fibonacci( numero - 1 ) + fibonacci( numero - 2 );

} // fim função fibonacci

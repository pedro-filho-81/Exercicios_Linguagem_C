/*
   Quest�o: /* Fig. 5.15: fig05_15.c  2 Fun��o recursiva fibonacci
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 141). Edi��o do Kindle.
   @Pedro Filho, 05/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
long fibonacci( long numero );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   long resultado = 0;
   long num = 0;

   // entrada de dados
   printf( "Digite um inteiro: " );
   scanf( "%d", &num );

   // resultado recebe o valor da fun��o fibonacci
   resultado = fibonacci( num );

   // mostrar o resultado
   printf( "Fibonacci( %ld ) = %ld\n", num, resultado );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o fibonacci
long fibonacci( long numero )
{
   // se n�mero igual a zero ou um
   if( numero == 0 || numero == 1 )
      // retorne o n�mero
      return numero;
   // se n�o
   else
      // retorne fibonacci
      return fibonacci( numero - 1 ) + fibonacci( numero - 2 );

} // fim fun��o fibonacci

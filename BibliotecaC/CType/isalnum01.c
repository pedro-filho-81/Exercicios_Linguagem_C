/*
   Strings:
   Auto: Pedro Filho, 24/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel
   int var;

   //entrada de dados
   printf( "Digite um caractere qualquer: " );
   scanf( "%d", &var );

   // verificar se o caractere � numerico ou alfab�tico
   if( isalnum( var ) ) {
      printf( "A vari�vel [%c] � alfanumerico.\n", var );
   } // fim if
   // se n�o
   else {
      printf( "A vari�vel [%c] n�o � alfanum�rica.\n", var );
   } // fim else

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

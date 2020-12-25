/*
   Strings:
   Auto: Pedro Filho, 24/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável
   int var;

   //entrada de dados
   printf( "Digite um caractere qualquer: " );
   scanf( "%d", &var );

   // verificar se o caractere é numerico ou alfabético
   if( isalnum( var ) ) {
      printf( "A variável [%c] é alfanumerico.\n", var );
   } // fim if
   // se não
   else {
      printf( "A variável [%c] não é alfanumérica.\n", var );
   } // fim else

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

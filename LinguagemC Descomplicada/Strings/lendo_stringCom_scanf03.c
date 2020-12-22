/*
   Strings: Lendo string do teclado com scanf()
   Auto: Pedro Flilho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define  TAMANHO 20

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // string
   char texto[ TAMANHO ];

   // entrada de dados
   printf( "Digite uma frase: "  );
   // entrada do usu�rio
   scanf( "%s", texto );

   printf( "\nO texto digitado foi: %s\n", texto );

   printf( "\nScanf() \nN�o � uma boa op��o para digitar uma string.\n" );

   printf( "Ele n�o consegue passar do primeiro espa�o em branco.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

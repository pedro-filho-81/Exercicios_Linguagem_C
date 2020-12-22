/*
   Strings: Lendo string do teclado com scanf()
   Auto: Pedro Flilho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define  TAMANHO 20

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // string
   char texto[ TAMANHO ];

   // entrada de dados
   printf( "Digite uma frase: "  );
   // entrada do usuário
   scanf( "%s", texto );

   printf( "\nO texto digitado foi: %s\n", texto );

   printf( "\nScanf() \nNão é uma boa opção para digitar uma string.\n" );

   printf( "Ele não consegue passar do primeiro espaço em branco.\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

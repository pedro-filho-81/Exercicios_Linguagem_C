/*
   Strings:
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHA 5
#define COLUNA 5

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria uma variável e atribui uma string
   char nome[12] = "Pedro Filho";

   // mostra a variável criada
   printf( "Cria a variável nome: char nome[12] = \"Pedro Filho\" \n" );

   // mostrar a string
   printf( "\nMostra o conteúdo da variável nome: %s\n", nome );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

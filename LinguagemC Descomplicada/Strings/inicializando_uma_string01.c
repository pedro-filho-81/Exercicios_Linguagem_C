/*
   Strings:
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHA 5
#define COLUNA 5

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria uma vari�vel e atribui uma string
   char nome[12] = "Pedro Filho";

   // mostra a vari�vel criada
   printf( "Cria a vari�vel nome: char nome[12] = \"Pedro Filho\" \n" );

   // mostrar a string
   printf( "\nMostra o conte�do da vari�vel nome: %s\n", nome );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

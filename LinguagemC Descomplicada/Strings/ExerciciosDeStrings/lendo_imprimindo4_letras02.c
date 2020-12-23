/*
   Strings:2) Faça um programa que leia uma string e imprima as
   quatro primeiras letras dela.
   Backes, André. Linguagem C (p. 139). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 22/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma frase: " );

   // limpar o buffer
   setbuf( stdin, NULL );

   // ENTRADA DO USUÁRIO
   scanf( "%4s", texto );

   // mostrando a string
   printf( "Você digitou: %4s\n", texto );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

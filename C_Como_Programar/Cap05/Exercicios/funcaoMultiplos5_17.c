/*
   Questão: 5.17 Múltiplos. Escreva uma função multiple que determine para um
   par de inteiros, se o segundo inteiro é um  múltiplo do primeiro.
   A função deve apanhar dois argumentos inteiros e retornar 1 (verdadeiro),
   se o segundo  for um múltiplo do primeiro, e 0 (falso), caso contrário.
   Use essa função em um programa que inclua uma série  de pares de inteiros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edição do Kindle.
   Autor: @Pedro Filho, 10/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int multiplos( int num1, int num2 );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variáveis
   int num1, num2;
   int resposta;

   printf( "MULTIPLOS\n" );

   // entrada de dados
   printf( "Primeiro número: " );
   scanf( "%d", &num1 );

   printf( "Segundo número: " );
   scanf( "%d", &num2 );

   resposta = multiplos( num2, num1 );

   if( resposta == 1 )
      printf( "%d é multiplo de %d\n", num2, num1  );
   else
      printf( "%d NÃO é multiplo de %d\n.", num2, num1 );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

} // FIM FUNÇÃO MAIN

// função multiplos
int multiplos( int num1, int num2 )
{
   // se num1
   if( num2 % num1 != 0 ){
      // retorne 1
      return 1;
   }
   else {
      return 0;
   }
} // fim da função

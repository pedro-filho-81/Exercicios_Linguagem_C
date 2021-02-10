/*
   Quest�o: 5.17 M�ltiplos. Escreva uma fun��o multiple que determine para um
   par de inteiros, se o segundo inteiro � um  m�ltiplo do primeiro.
   A fun��o deve apanhar dois argumentos inteiros e retornar 1 (verdadeiro),
   se o segundo  for um m�ltiplo do primeiro, e 0 (falso), caso contr�rio.
   Use essa fun��o em um programa que inclua uma s�rie  de pares de inteiros.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
   Autor: @Pedro Filho, 10/02/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int multiplos( int num1, int num2 );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�veis
   int num1, num2; // recebe os valores
   int resposta; // recebe a fun��o

   // cabe�alho
   printf( "MULTIPLOS\n" );

   // entrada de dados
   printf( "Primeiro n�mero: " );
   scanf( "%d", &num1 );

   printf( "Segundo n�mero: " );
   scanf( "%d", &num2 );

   // mostra o c�culo
   printf( "%d %% %d = %d\n", num2, num1, num2 % num1 );

   // resposta chama a fun��o e recebe o valor retornado
   resposta = multiplos( num1, num2 );

   // se a resposta for 1
   if( resposta == 1 )
      // imprime que � multiplo
      printf( "%d � multiplo de %d\n", num2, num1  );

   // se n�o
   else
      // imprime que n�o � multiplo
      printf( "%d N�O � multiplo de %d\n.", num2, num1 );

   // pular linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

} // FIM FUN��O MAIN

// fun��o multiplos
int multiplos( int num1, int num2 )
{
   // se num2 for multiplo de num1
   if( ( num2 % num1 ) == 0 ){
      // retorne 1
      return 1;
   } // fim if

   // se n�o
   else {
      // retorne 0
      return 0;
   }// fim else

} // fim da fun��o

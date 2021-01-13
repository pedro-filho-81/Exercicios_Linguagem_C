/*
   2.23 Maiores e menores inteiros. Escreva um programa  que leia cinco
   inteiros e depois determine e imprima o  maior e o menor inteiro no grupo.
   Use apenas as t�cnicas  de programa��o que voc� aprendeu neste cap�tulo.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 42). Edi��o do Kindle.
   Autor: Pedro Filho, 12/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria 5 vari�veis
   int n1, n2, n3, n4, n5;
   int maiorValor = 0; // var para o maior valor
   int menorValor = 0; // para o menor valor

   // entrada de dados
   printf( "Digite 5 inteiros diferentes maior que  0( zero ): " ); // prompt
   scanf( "%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5 ); // do usu�rio

   // maior valor recebe o �ltimo inteiro
   // 1 2 3 4 ( 5 ) = n5
   maiorValor = n5;

   // Quando o maior valor � o �ltimo
   // verificando o menor valor
    // 1 3 2 4 5
   // neste case 1 ser� o menor valor
   if( n1 < n2 )
      menorValor = n1;

   // Quando o maior valor � o �ltimo
   // verificando o menor valor
   if( n2 < n1 ) // 3 1 2 4 5
      if ( n2 < n3 )
         menorValor = n2;

   // Quando o maior valor � o �ltimo
   // verificando o menor valor
   if( n3 < n2 ) // 3 2 1 4 5
      if ( n3 < n4 )
         menorValor = n3;

   // Quando o maior valor � o �ltimo
   // verificando o menor valor
   if( n4 < n3 ) // 3 2 4 1 5
      if ( n4 < n5 )
         menorValor = n4;

   // Quando o menor valor � o �ltimo
   // verificando o maior valor
   // 3 2 4 5 1
   if( n4 > n3 )
   {
      if ( n4 > n5 )
      {
         menorValor = n5;
         maiorValor = n4;
      } // fim if interno
   } // fim if externo

   // Quando o menor valor � o �ltimo
   // verificando o maior valor
   // 3 2 5 4 1
   if( n3 > n2 )
   {
      if ( n3 > n4 )
      {
         menorValor = n5;
         maiorValor = n3;
      } // fim if interno
   } // fim if externo


   // Quando o menor valor � o �ltimo
   // verificando o maior valor
   // 3 5 2 4 1
   if( n2 > n1 )
   {
      if ( n2 > n3 )
      {
         menorValor = n5;
         maiorValor = n2;
      } // fim if interno
   } // fim if externo

   // Quando o menor valor � o �ltimo
   // verificando o maior valor
   // 5 3 2 4 1
   if( n1 > n2 )
   {
      menorValor = n5;
      maiorValor = n1;
   } // fim if externo

   // mostrando o resultado1
   printf( "Maior valor � %d\n", maiorValor );
   printf( "Menor valor � %d\n", menorValor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

} // FIM FUN��O MAIN

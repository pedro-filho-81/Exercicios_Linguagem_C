/*
   Quest�o: 4.16 Problema de impress�o de tri�ngulo. Escreva um  programa que
   imprima os padr�es a seguir separadamente, um abaixo do outro. Use loops
   for para gerar os  padr�es. Todos os asteriscos (*) devem ser impressos por
   uma �nica instru��o printf na forma printf(�*�);  (isso faz com que
   os asteriscos sejam impressos lado a  lado). [Dica: os dois �ltimos padr�es
   exigem que cada  linha comece com um n�mero de espa�os apropriado.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edi��o do Kindle.
   Autor: @Pedro Filho, 24/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   //loop para o primeiro tri�gulo
   printf( "Tri�ngulo A)\n" );
   for( int linha = 1; linha <= 10; linha++ ) {

      // loop para colunas
      for( int coluna = 1; coluna <= linha; coluna++ ) {

         // imprime
         printf( "* " );
      } // fim for coluna

      // pular linha
      printf( "\n" );
   } // fim for linha

   //loop para o segundo tri�gulo
   printf( "Tri�ngulo B)\n" );
   for( int linha = 10; linha >= 1; linha-- ) {

      // loop para colunas
      for( int coluna = linha; coluna >= 1; coluna-- ) {

         // imprime
         printf( "* " );
      } // fim for coluna

      // pular linha
      printf( "\n" );
   } // fim for linha

   //loop para o terceiro tri�gulo
   printf( "Tri�ngulo C)\n" );
   for( int linha = 10; linha >= 1; linha-- ) {

      // triangulo vazio
      for( int vazio = 1; vazio <= linha; vazio++ ) {

         // imprime espa�o em branco
         printf( "  " );
      } // fim for vazio

      // triangulo asterisco
      for( int coluna = 10; coluna >= linha; coluna-- ) {

         // imprime
         printf( "* " );
      } // fim for coluna

      // pular linha
      printf( "\n" );
   } // fim for linha


   //loop para o terceiro tri�gulo
   printf( "Tri�ngulo D)\n" );
   for( int linha = 1; linha <= 10; linha++ ) {

      // tei�ngulo vazio
      for( int vazio = 1; vazio <= linha; vazio++ ) {

         // imprime
         printf( "  " );
      } // fim for vazio

      // triangulo asterisco
      for( int coluna = 10; coluna >= linha; coluna-- ) {

         // imprime
         printf( "* " );
      } // fim for vazio

      // pular linha
      printf( "\n" );
   } // fim for linha

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

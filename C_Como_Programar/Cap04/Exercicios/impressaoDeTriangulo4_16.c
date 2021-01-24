/*
   Questão: 4.16 Problema de impressão de triângulo. Escreva um  programa que
   imprima os padrões a seguir separadamente, um abaixo do outro. Use loops
   for para gerar os  padrões. Todos os asteriscos (*) devem ser impressos por
   uma única instrução printf na forma printf(“*”);  (isso faz com que
   os asteriscos sejam impressos lado a  lado). [Dica: os dois últimos padrões
   exigem que cada  linha comece com um número de espaços apropriado.]
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 109). Edição do Kindle.
   Autor: @Pedro Filho, 24/01/2021
*/

// Incluir Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   //loop para o primeiro triâgulo
   printf( "Triângulo A)\n" );
   for( int linha = 1; linha <= 10; linha++ ) {

      // loop para colunas
      for( int coluna = 1; coluna <= linha; coluna++ ) {

         // imprime
         printf( "* " );
      } // fim for coluna

      // pular linha
      printf( "\n" );
   } // fim for linha

   //loop para o segundo triâgulo
   printf( "Triângulo B)\n" );
   for( int linha = 10; linha >= 1; linha-- ) {

      // loop para colunas
      for( int coluna = linha; coluna >= 1; coluna-- ) {

         // imprime
         printf( "* " );
      } // fim for coluna

      // pular linha
      printf( "\n" );
   } // fim for linha

   //loop para o terceiro triâgulo
   printf( "Triângulo C)\n" );
   for( int linha = 10; linha >= 1; linha-- ) {

      // triangulo vazio
      for( int vazio = 1; vazio <= linha; vazio++ ) {

         // imprime espaço em branco
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


   //loop para o terceiro triâgulo
   printf( "Triângulo D)\n" );
   for( int linha = 1; linha <= 10; linha++ ) {

      // teiângulo vazio
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

}  // FIM FUNÇÃO MAIN

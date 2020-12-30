/*
   Strings: 13) Escreva um programa que recebe uma string S e dois
   valores inteiros não negativos i e j. Em seguida, imprima os
   caracteres contidos no segmento que vai de i a j da string S.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 100

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto[ TAMANHO ];
   int i, j;

   // cabeçalho
   printf( "{ IMPRIMINDO I e J }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto );

   // entrada dos digitos
   printf( "Digite o valor de i e j: " );
   scanf( "%d%d", &i, &j );

   //  loop para mostrar os valores
   for( int x = 0; texto[ x ] != '\0'; x++ )
   {
      // se x maior ou igual a i e x menor ou igual a j
      if( x >= i && x <= j ){

         // imprima o intervalor entre os valores
         printf( "%c", texto[ x ] );

      } // fim if
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

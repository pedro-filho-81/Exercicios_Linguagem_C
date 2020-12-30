/*
   Strings: 14) O código de César é uma das técnicas de criptografia
   mais simples e conhecidas. É um tipo de substituição no qual cada
   letra do texto é substituída por outra, que se apresenta n posições
   após ela no alfabeto. Por exemplo, com uma troca de três posições,
   a letra A seria substituída por D, B se tornaria E e assim por diante.
   Escreva um programa que faça uso desse código de César para três
   posições. Entre com uma string e imprima a string codificada.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 30/12/2020
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
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];

   // cabeçalho
   printf( "{ STRING CÓDIGO DE CESAR }\n" );

   //entrada de dados
   printf( "Digite uma ( texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   fgets( texto1, 100, stdin );

   // imprimir
   printf( "Texto original: %s\n", texto1 );

   // loop para aplicar o código de Cesar
   for( int i = 0; texto1[ i ] != '\0'; i++ )
   {
      // se texto1 igual a espaço ou nova linha
      if( texto1[ i ] == ' ' || texto1[ i ] == '\n' ) {
         // texto2 recebe espaço ou nova linha
         texto2[ i ] = texto1[ i ];
      } // fim if
      // se não
      else {
         // texto2 recebe texto1 mais três casas
         // exp: aaa é igual a ddd
         texto2[ i ] = texto1[ i ] + 3;
      } // fim else
   } // fim for

   // imprimir
   printf( "Código de Cesar: %s\n", texto2 );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

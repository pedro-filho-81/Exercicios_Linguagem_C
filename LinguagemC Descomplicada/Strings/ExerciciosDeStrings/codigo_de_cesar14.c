/*
   Strings: 14) O c�digo de C�sar � uma das t�cnicas de criptografia
   mais simples e conhecidas. � um tipo de substitui��o no qual cada
   letra do texto � substitu�da por outra, que se apresenta n posi��es
   ap�s ela no alfabeto. Por exemplo, com uma troca de tr�s posi��es,
   a letra A seria substitu�da por D, B se tornaria E e assim por diante.
   Escreva um programa que fa�a uso desse c�digo de C�sar para tr�s
   posi��es. Entre com uma string e imprima a string codificada.
   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 30/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 100

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];

   //entrada de dados
   printf( "Digite uma palavra ou frase: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   fgets( texto1, 100, stdin );

   // limpar a tela
   system( "cls" );

   // cabe�alho
   printf( "{ CODIFICA��O E DECODIFICA��O DO C�DIGO DE CESAR }\n" );

   // imprimir
   printf( "\nTexto original: %s\n", texto1 );

   //CODIFICA��O
   // loop para aplicar o c�digo de Cesar
   for( int i = 0; texto1[ i ] != '\0'; i++ )
   {
      // se texto1 igual a espa�o ou nova linha
      if( texto1[ i ] == ' ' || texto1[ i ] == '\n' ) {
         // texto2 recebe espa�o ou nova linha
         texto2[ i ] = texto1[ i ];
      } // fim if
      // se n�o
      else {
         // texto2 recebe texto1 mais tr�s casas
         // exp: aaa � igual a ddd
         texto2[ i ] = texto1[ i ] + 3;
      } // fim else
   } // fim for

   // imprimir
   printf( "C�digo de Cesar: %s\n", texto2 );

   // imprimir
   printf( "DECODIFICA��O - C�digo de Cesar: " );
   // DECODIFICA��O
   // loop para decodificar o c�digo de Cesar
   for( int i = 0; texto2[ i ] != '\0'; i++ )
   {
      // se texto1 igual a espa�o ou nova linha
      if( texto2[ i ] == ' ' || texto2[ i ] == '\n' ) {
         // imprima texto2
         printf( "%c", texto2[ i ] );
      } // fim if
      // se n�o
      else {
         // imprima texto 2 menos 3
         printf( "%c", texto2[ i ] - 3 );
      } // fim else
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Strings:  15) Escreva um programa que leia duas strings e as
   imprima em ordem alfab�tica, a ordem em que elas apareceriam em um dicion�rio.
   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];
   int resposta;

   // cabe�alho
   printf( "{ COMPARANDO STRING }\n" );

   //entrada de dados
   printf( "Digite uma frase ou palavra: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( texto1 );


   //entrada de dados
   printf( "Digite outra palavra ou frase: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( texto2 );

   // resposta recebe um valor da fun��o strcmp()
   // STRCMP( destino, origem )
   resposta = strcmp( texto1, texto2 );

   // se a resposta for um valor menor que zero
   if( resposta < 0 ) {

      // texto 1 vem na frente
      printf( "texto1 |%s| texto2 |%s|\n", texto1, texto2 );
   } // fim if

   // se resposta for um valor maior que zero
   else if( resposta > 0 ) {

      // texto 2 vem na frente
      printf( "Texto2 |%s| texto1 |%s|\n", texto2, texto1 );
   } // fim else if

   // se n�o
   else {

      // os textos s�o iguais
      printf( " textos iguais |%s|\n", texto1 );
   } // fim else

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

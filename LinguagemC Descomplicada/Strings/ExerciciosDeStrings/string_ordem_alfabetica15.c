/*
   Strings:  15) Escreva um programa que leia duas strings e as
   imprima em ordem alfabética, a ordem em que elas apareceriam em um dicionário.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 27/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 20

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];
   int resposta;

   // cabeçalho
   printf( "{ COMPARANDO STRING }\n" );

   //entrada de dados
   printf( "Digite uma frase ou palavra: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto1 );


   //entrada de dados
   printf( "Digite outra palavra ou frase: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto2 );

   // resposta recebe um valor da função strcmp()
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

   // se não
   else {

      // os textos são iguais
      printf( " textos iguais |%s|\n", texto1 );
   } // fim else

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

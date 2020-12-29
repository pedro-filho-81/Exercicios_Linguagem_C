/*
   Strings: Esta fun��o retorna o n�mero de caracteres
   no segmento inicial de str1 que consiste apenas em caracteres de str2
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
   char destDaPesquisa[ TAMANHO ];
   char oriDaPesquisa[ TAMANHO ];
   int resposta;


   // cabe�alho
   printf( "{ COMPARANDO STRING }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( destDaPesquisa );

   //entrada de dados
   printf( "Digite uma string a ser pesquisado na string anterior: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( oriDaPesquisa );

   // resposta recebe um valor da fun��o strcmp()
   // STRNCMP( destino, origem )
   resposta = strncmp( destDaPesquisa, oriDaPesquisa, strlen( destDaPesquisa ) );

   // verificar se resposta � diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto1 |%s| contem o texto pesquisado [ %s ]\n",
             destDaPesquisa, oriDaPesquisa );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto1 |%s|  n�o contem o texto pesquisado [ %s ]\n",
             destDaPesquisa, oriDaPesquisa );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

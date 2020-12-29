/*
   Strings: Esta função retorna o número de caracteres
   no segmento inicial de str1 que consiste apenas em caracteres de str2
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
   char destDaPesquisa[ TAMANHO ];
   char oriDaPesquisa[ TAMANHO ];
   int resposta;


   // cabeçalho
   printf( "{ COMPARANDO STRING }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( destDaPesquisa );

   //entrada de dados
   printf( "Digite uma string a ser pesquisado na string anterior: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( oriDaPesquisa );

   // resposta recebe um valor da função strcmp()
   // STRNCMP( destino, origem )
   resposta = strncmp( destDaPesquisa, oriDaPesquisa, strlen( destDaPesquisa ) );

   // verificar se resposta é diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto1 |%s| contem o texto pesquisado [ %s ]\n",
             destDaPesquisa, oriDaPesquisa );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto1 |%s|  não contem o texto pesquisado [ %s ]\n",
             destDaPesquisa, oriDaPesquisa );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

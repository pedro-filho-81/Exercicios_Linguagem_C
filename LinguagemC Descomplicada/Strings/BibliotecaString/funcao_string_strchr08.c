/*
   Strings:  fun��o strchr() pesquisa se existe uma caractere na string destino
   Auto: Pedro Filho, 24/12/2020
*/

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
   char caractere;
   int resposta;

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   gets( texto1 );


   //entrada de dados
   printf( "Digite o caractere a ser pesquisado na string: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USU�RIO
   scanf( "%c", &caractere );

   // resposta recebe um valor da fun��o memchr()
   resposta = strchr( texto1, caractere );

   // verificar se resposta � diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto |%s| contem o caractere pesquisado. [ %c ]\n", texto1, caractere );
   } // fim if resposta

   else { // se igual a NULL
      // imprima                                                              |
      printf( "O texto |%s| n�o contem o caractere pesquisado. [ %c ]\n", texto1, caractere );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

/*
   Strings: Compara a string apontada por str1 com a string apontada por str2 .
   Auto: Pedro Filho, 24/12/2020
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
   gets( texto2 );

   // resposta recebe um valor da fun��o strcmp()
   // STRCMP( destino, origem )
   resposta = strcmp( texto1, texto2 );

   // verificar se resposta � diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto1 |%s| contem o texto2 [ %s ]\n", texto1, texto2 );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto1 |%s|  n�o contem o texto2 [ %s ]\n", texto1, texto2 );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

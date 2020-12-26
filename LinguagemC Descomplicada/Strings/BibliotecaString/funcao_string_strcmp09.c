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
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto1 );


   //entrada de dados
   printf( "Digite o caractere a ser pesquisado na string: " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( texto2 );

   // resposta recebe um valor da função strcmp()
   // STRCMP( destino, origem )
   resposta = strcmp( texto1, texto2 );

   // verificar se resposta é diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto1 |%s| contem o texto2 [ %s ]\n", texto1, texto2 );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto1 |%s|  não contem o texto2 [ %s ]\n", texto1, texto2 );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

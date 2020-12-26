/*
   Strings 01: A função void * memchr da biblioteca C
   (const void * str, int c, size_t n) procura a primeira
   ocorrência do caractere c (um caracter sem sinal) nos
   primeiros n bytes da string apontada, pelo argumento str
   Auto: Pedro Filho, 24/12/2020
*/

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
   char caractere;
   int resposta;

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
   scanf( "%c", &caractere );

   // resposta recebe um valor da função memchr()
   resposta = memchr( texto1, caractere, strlen( texto1 ) );

   // verificar se resposta é diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto contem o caractere [ %c ]\n", caractere );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto não contem o caractere [ %c ]\n", caractere );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

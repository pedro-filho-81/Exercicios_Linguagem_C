/*
   Strings 01: A fun��o void * memchr da biblioteca C
   (const void * str, int c, size_t n) procura a primeira
   ocorr�ncia do caractere c (um caracter sem sinal) nos
   primeiros n bytes da string apontada, pelo argumento str
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
   resposta = memchr( texto1, caractere, strlen( texto1 ) );

   // verificar se resposta � diferente de null
   if( resposta != NULL ) { // se diferente
      // mostrar
      printf( "O texto contem o caractere [ %c ]\n", caractere );
   } // fim if resposta

   else { // se igual a NULL
      // imprima
      printf( "O texto n�o contem o caractere [ %c ]\n", caractere );
   } // fim else resposta

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

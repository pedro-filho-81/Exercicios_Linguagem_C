/*
   Strings:8) Construa um programa que leia duas strings do teclado.
   Imprima uma mensagem informando se a segunda string lida est�
   contida dentro da primeira.
   Backes, Andr�. Linguagem C (p. 140). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 24/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAMANHO 30

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char texto1[ TAMANHO ];
   char texto2[ TAMANHO ];
   char *resposta;

   printf( "Digite um texto, frase ou palavra: " );
   fflush(stdin );
   fgets( texto1, 30, stdin );


   printf( "Digite uma palavra a pesquisar: " );
   fflush(stdin );
   fgets( texto2, 30, stdin );

   resposta = strstr( texto1, texto2 );

   // se a resposta for diferente de nulo
   if( resposta != NULL ){
      printf( "%s est� contido na farase %s\n", resposta, texto1 );
   } // fim if

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

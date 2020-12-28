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
#include <time.h>

#define TAMANHO 50

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];
   char resposta; // aguarda um retorno da fun��o strcmp()


   // entrada de dados
   printf( "Digite um texto, frase ou palavra: " );
   setbuf(stdin, NULL );   // limpa o buffer
   gets( origem ); // entrada do usu�rio


   // entrada de dados do usu�rio
   printf( "Digite uma palavra a pesquisar: " );
   setbuf(stdin, NULL ); // limpa o buffer
   gets( destino ); // entrada do usu�rio

   // agurada resultado da compara��o po strcmp()
   resposta = strcmp( destino, origem );

   // se a resposta for diferente de nulo
   if( resposta != NULL ){
      printf( "A string |%s| est� contida an frase |%s|\n", destino, origem );
   } // fim if
   else {
      printf( "A string |%s| N�O est� contida na frase |%s|\n", destino, origem );
   } // fim else


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

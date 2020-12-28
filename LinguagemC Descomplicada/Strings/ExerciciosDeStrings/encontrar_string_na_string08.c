/*
   Strings:8) Construa um programa que leia duas strings do teclado.
   Imprima uma mensagem informando se a segunda string lida está
   contida dentro da primeira.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 24/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAMANHO 50

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vetor para string
   char origem[ TAMANHO ];
   char destino[ TAMANHO ];
   char resposta; // aguarda um retorno da função strcmp()


   // entrada de dados
   printf( "Digite um texto, frase ou palavra: " );
   setbuf(stdin, NULL );   // limpa o buffer
   gets( origem ); // entrada do usuário


   // entrada de dados do usuário
   printf( "Digite uma palavra a pesquisar: " );
   setbuf(stdin, NULL ); // limpa o buffer
   gets( destino ); // entrada do usuário

   // agurada resultado da comparação po strcmp()
   resposta = strcmp( destino, origem );

   // se a resposta for diferente de nulo
   if( resposta != NULL ){
      printf( "A string |%s| está contida an frase |%s|\n", destino, origem );
   } // fim if
   else {
      printf( "A string |%s| NÃO está contida na frase |%s|\n", destino, origem );
   } // fim else


   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

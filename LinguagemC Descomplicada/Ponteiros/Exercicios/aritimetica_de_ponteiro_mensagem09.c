/*
   Ponteiros:  9) Crie uma função que receba como parâmetro um vetor
   e o imprima. Não utilize índices para percorrer o vetor,
   apenas aritmética de ponteiros.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // PARA usar a função sleep
#define TAMANHO 100

// protótipo
void mostrarString( char *texto );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vetor string
   char vetor[ TAMANHO ] = "Estou aprendendo a programar na linguagem C - ponteiros.";

   // chamar a função mostraString
   mostrarString( vetor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// cria função mostrarString
void mostrarString( char *texto )
{
   // loop para mostra uma string
   // usando aritimética de ponteiro
   for( int i = 0; *( texto + i ) != '\0'; i++ )
   {
      // imprima
      printf( "%c ", *( texto + i ) );

   } // fim for mostra string

   printf( "\n" ); // pular linha
} // fim função mostrarString

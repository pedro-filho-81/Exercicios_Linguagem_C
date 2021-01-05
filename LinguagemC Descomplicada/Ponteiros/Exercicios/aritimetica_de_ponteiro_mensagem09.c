/*
   Ponteiros:  9) Crie uma fun��o que receba como par�metro um vetor
   e o imprima. N�o utilize �ndices para percorrer o vetor,
   apenas aritm�tica de ponteiros.
   Backes, Andr�. Linguagem C (p. 213). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // PARA usar a fun��o sleep
#define TAMANHO 100

// prot�tipo
void mostrarString( char *texto );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria vetor string
   char vetor[ TAMANHO ] = "Estou aprendendo a programar na linguagem C - ponteiros.";

   // chamar a fun��o mostraString
   mostrarString( vetor );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// cria fun��o mostrarString
void mostrarString( char *texto )
{
   // loop para mostra uma string
   // usando aritim�tica de ponteiro
   for( int i = 0; *( texto + i ) != '\0'; i++ )
   {
      // imprima
      printf( "%c ", *( texto + i ) );

   } // fim for mostra string

   printf( "\n" ); // pular linha
} // fim fun��o mostrarString

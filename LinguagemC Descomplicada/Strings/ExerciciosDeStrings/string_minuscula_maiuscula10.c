/*
   Strings: 10) Escreva um programa que leia uma string do teclado
   e converta todos os seus caracteres em maiúscula. Dica: subtraia
   32 dos caracteres cujo código ASCII está entre 97 e 122.
   Backes, André. Linguagem C (p. 140). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 27/12/2020
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
   char stringMinuscula[ TAMANHO ];

   // cabeçalho
   printf( "{ TRANSFORMANDO STRING minúscula EM MAIÚSCULA }\n" );

   //entrada de dados
   printf( "Digite uma ( frase, palavra ou texto ): " );
   // limpar o buffer
   setbuf( stdin, NULL );
   // ENTRADA DO USUÁRIO
   gets( stringMinuscula );

   // mostrar
   printf( "String minúscula: %s\n", stringMinuscula );

   // maiúscula
   printf( "String maiúscula: " );

   // loop for para trasformar string minúscula em maiúscula
   for( int i = 0; i < stringMinuscula[ i ] != '\0'; i++ )
   {
      printf( "%c ", stringMinuscula[ i ] - 32 );
   }

   // pular uma linha
   printf( "\n\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

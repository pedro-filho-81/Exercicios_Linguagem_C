/*
   Alocação: 1) Escreva um programa que mostre o tamanho em byte
   que cada tipo de dados ocupa na memória: char, int, float, double.
   Backes, André. Linguagem C (p. 232). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 09/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>3

struct cadastro{
   char nome[ 30 ];
   int idade;
};
// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // variável de struct
   //struct cadastro cad;

   printf( "Para achar o tamanho em bytes do tipo usar a função SIZEOF().\n" );
   printf( "o tamanho em bytes do tipo Char é %d byte.\n", sizeof( char ) );
   printf( "O tamanho em bytes do tipo int é %d bytes.\n", sizeof( int ) );
   printf( "O tamanho em bytes do tipo float é %d bytes.\n", sizeof( float ) );
   printf( "O tamanho em bytes do tipo double é %d bytes.\n", sizeof( double ) );
   printf( "O tamanho em bytes do tipo struct cadastro cad é %d bytes.\n",
          sizeof( struct cadastro ) );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

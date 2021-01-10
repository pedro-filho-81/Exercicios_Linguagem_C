/*
   Aloca��o: 1) Escreva um programa que mostre o tamanho em byte
   que cada tipo de dados ocupa na mem�ria: char, int, float, double.
   Backes, Andr�. Linguagem C (p. 232). GEN LTC. Edi��o do Kindle.
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
// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // vari�vel de struct
   //struct cadastro cad;

   printf( "Para achar o tamanho em bytes do tipo usar a fun��o SIZEOF().\n" );
   printf( "o tamanho em bytes do tipo Char � %d byte.\n", sizeof( char ) );
   printf( "O tamanho em bytes do tipo int � %d bytes.\n", sizeof( int ) );
   printf( "O tamanho em bytes do tipo float � %d bytes.\n", sizeof( float ) );
   printf( "O tamanho em bytes do tipo double � %d bytes.\n", sizeof( double ) );
   printf( "O tamanho em bytes do tipo struct cadastro cad � %d bytes.\n",
          sizeof( struct cadastro ) );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

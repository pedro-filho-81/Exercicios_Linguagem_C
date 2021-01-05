/*
   Alocação: A função sizeof() é usada para saber o número de bytes
   necessários para alocar um único elemento de determinado tipo de dado.
   Backes, André. Linguagem C (p. 218). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 05/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ponto {
   int x, y;
   char a[ 5 ];
};
// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // objeto struct
   struct ponto p;

   // cabeçalho
   printf( "\nALOCAÇÃO DINAMICA FUNÇÃO SIZEOF()\n" );

   // função sizeof() usada para saber o número de bits
   // para alocar um determinado elemento (valor)
   // sizeof( type, valor, etc )
   printf( "sizeof( char ) o tipo char tem %d bit\n", sizeof( char ) );
   printf( "sizeof( int  ) o tipo int tem %d bit\n", sizeof( int ) );
   printf( "sizeof( float ) o tipo float tem %d bit\n", sizeof( float ) );
   printf( "sizeof( double ) o tipo double tem %d bit\n", sizeof( double ) );
   printf( "sizeof( struct ponto ) o tipo struct ponto tem %d bit\n",
          sizeof( struct ponto ) );

   // mostrar tamanho das variáveis da estrutura
   printf( "\nsizeof( p.x ) o tipo int x tem %d bit\n", sizeof p.x );
   printf( "sizeof( p.y ) o tipo int y tem %d bit\n", sizeof p.y );
   printf( "sizeof( p.a ) o tipo char a[ 5 ] tem %d bit\n", sizeof p.a );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

/*
   Aloca��o: A fun��o sizeof() � usada para saber o n�mero de bytes
   necess�rios para alocar um �nico elemento de determinado tipo de dado.
   Backes, Andr�. Linguagem C (p. 218). GEN LTC. Edi��o do Kindle.
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
// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // objeto struct
   struct ponto p;

   // cabe�alho
   printf( "\nALOCA��O DINAMICA FUN��O SIZEOF()\n" );
   printf( "Mostra o tamanho que o tipo usa "
          "\nda memoria do computador quando declarado.\n" );
   // fun��o sizeof() usada para saber o n�mero de bits
   // para alocar um determinado elemento (valor)
   // sizeof( type, valor, etc )
   printf( "sizeof( char ) o tipo char usa %d byte\n", sizeof( char ) );
   printf( "sizeof( int  ) o tipo int usa %d bytes\n", sizeof( int ) );
   printf( "sizeof( float ) o tipo float usa %d bytes\n", sizeof( float ) );
   printf( "sizeof( double ) o tipo double usa %d bytes\n", sizeof( double ) );
   printf( "sizeof( struct ponto ) o tipo struct ponto usa %d bytes\n",
          sizeof( struct ponto ) );

   // cabe�alho
   printf( "\nMOSTRANDO AS VARI�VEIS DA ESTRUTURA" );
   // mostrar tamanho das vari�veis da estrutura
   printf( "\nsizeof( p.x ) o tipo int x usa %d bytes\n", sizeof p.x );
   printf( "sizeof( p.y ) o tipo int y usa %d bytes\n", sizeof p.y );
   printf( "sizeof( p.a ) o tipo char a[ 5 ] usa %d bytes\n", sizeof p.a );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

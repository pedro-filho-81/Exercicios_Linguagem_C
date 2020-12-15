/*
   Fig. 7.15: fig07_15.c
   2 Esse programa coloca valores em um array, ordena os valores em
   3 ordem crescente e imprime o array resultante.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 221). Edi��o do Kindle.
   Pedro Filho 14/12/2020
*/

// biblioteca
#include <stdio.h>
#include <locale.h>
#define SIZE 10

// prot�tipo
void bobbleSort( int *const array, const size_t size );

// fun��o principal
int main()
{
   // aceita os caracteres Portugu�s Brasil
   setlocale(LC_ALL, "Portuguese" );

   // array
   int a[ SIZE ] = { 2, 6, 4, 8 ,10, 12,89,68, 45, 37 };

   printf( "Itens de dados em ordem original:\n" );

   // loop pelo array a
   for( size_t i = 0; i < SIZE; i++ )
   {
      printf( "%4d", a[ i ] );
   } // fim for

   // ordena o array
   bobbleSort( a, SIZE );

   printf( "\nItens de dados em ordem crescente:\n" );

   // loop pelo array a
   for( size_t i = 0; i < SIZE; i++ )
   {
      printf( "%4d", a[ i ] );
   } // fim for

   printf( "\n" ); // pular uma linha

   return 0; // fim do programa

}  // fim main

// fun��o bobbleSort ordena um array de inteiros usando
// algoritimo bobble sort
void bobbleSort(int *const array, const size_t size )
{
   // prot�tipo
   void swap( int *element1Ptr, int *element2Ptr );

   // loop para controlar passadas
   for( unsigned int pass = 0; pass < size - 1; pass++ )
   {
      // loop para controlar compara��es durante cada passada
      for( size_t j = 0; j < size - 1; j++ )
      {
         // troca elementos adjacentes se estiverem fora de ordem
         if( array[ j ] > array[ j + 1 ] )
         {
            swap( &array[ j ], &array[ j + 1 ] );
         } // fim array
      } // fim for interno
   } // fim for externo
} // fim fun��o bobblesort

// fun��o swap ( trocar )
void swap( int *element1Ptr, int *element2Ptr )
{
   int hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // fim fun��o swap

/*
   Aloca��o: A fun��o malloc() serve para alocar mem�ria durante
   a execu��o do programa.
   Backes, Andr�. Linguagem C (p. 218). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 06/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria um ponteiro
   int *ptr;

   // alocando o vetor ptr com 5 posi��es
   ptr = ( int *) malloc( 5 *sizeof( int ) );

   // cabe�alho
   printf( "\tALOCA��O DINAMICA FUN��O MALLOC()\n" );
   printf( "\n\tint *ptr; - cria o ponteiro ( ptr )\n");
   printf( "\tptr = ( int *) malloc( 5 *sizeof( int ) );\n" );
   printf( "\nO ponteiro ( ptr ) passa a ser tratado com vetor "
           "\n\tptr[ i ] no loop for.\n" );
   printf( "\nmalloc() - A fun��o retorna um ponteiro gen�rico, que � "
           "\n\tconvertido no tipo de ponteiro para inteiro "
           "\n\tvia [ type cast (int *) ]\n" );
   printf( "\n( 5 *sizeof( int ) ) - aloca um vetor com 5 posi��es.\n" );
   printf( "\nsizeof( int ) - A fun��o mostra que o tipo inteiro usa "
           "\n\t 4 bytes da memoria.\n\n" );

   // loop adicionar valores
   for( int i = 0; i < 5; i++ )
   {
      // entrada de dados
      printf( "Digite um valor para a %d� posi��o: ", i );
      scanf( "%d", &ptr[ i ] );
   } // fim for

   // mostrar valores do vetor
   printf( "\nVetor ptr = { " );

   // loop para mostrar os dados do vetor
   for( int i = 0; i < 5; i++ )
   {
      // mostra valores
      printf( "%d ", ptr[ i ] );
   } // fim for

   // imprimir
   printf( "}\n" );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

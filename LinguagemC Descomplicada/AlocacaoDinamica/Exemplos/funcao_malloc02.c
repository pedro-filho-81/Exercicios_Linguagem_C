/*
   Alocação: A função malloc() serve para alocar memória durante
   a execução do programa.
   Backes, André. Linguagem C (p. 218). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 06/01/2021
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // cria um ponteiro
   int *ptr;

   // alocando o vetor ptr com 5 posições
   ptr = ( int *) malloc( 5 *sizeof( int ) );

   // cabeçalho
   printf( "\tALOCAÇÃO DINAMICA FUNÇÃO MALLOC()\n" );
   printf( "\n\tint *ptr; - cria o ponteiro ( ptr )\n");
   printf( "\tptr = ( int *) malloc( 5 *sizeof( int ) );\n" );
   printf( "\nO ponteiro ( ptr ) passa a ser tratado com vetor "
           "\n\tptr[ i ] no loop for.\n" );
   printf( "\nmalloc() - A função retorna um ponteiro genérico, que é "
           "\n\tconvertido no tipo de ponteiro para inteiro "
           "\n\tvia [ type cast (int *) ]\n" );
   printf( "\n( 5 *sizeof( int ) ) - aloca um vetor com 5 posições.\n" );
   printf( "\nsizeof( int ) - A função mostra que o tipo inteiro usa "
           "\n\t 4 bytes da memoria.\n\n" );

   // loop adicionar valores
   for( int i = 0; i < 5; i++ )
   {
      // entrada de dados
      printf( "Digite um valor para a %dº posição: ", i );
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

}  // FIM FUNÇÃO MAIN

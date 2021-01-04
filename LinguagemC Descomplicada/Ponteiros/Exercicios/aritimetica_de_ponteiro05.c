/*
   Ponteiros: 5) Crie um programa que contenha um array de inteiros
   com cinco elementos. Utilizando apenas aritmética de ponteiros,
   leia esse array do teclado e imprima o dobro de cada valor lido.
   Backes, André. Linguagem C (p. 213). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 03/01/2021
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

   // cria o vetor
   int vetor[ 5 ];

   // cria o ponteiro para inteiro
   // que recebe o endereço do vetor
   int *vtrPtr = vetor;

   // cabeçalho
   printf( "ENTRADA DOS VALORES\n" );

   // loop para adicionar valores ao vetor
   for( int i = 0; i < 5; i++ )
   {
      // entrada de dados
      printf( "Digite o %dº valor: ", i + 1 );
      // entrada do usuário
      scanf( "%d", &vetor[ i ] );

   } // fim for

   // cabeçalho
   printf( "\nMOSTRA OS VALORES\n" );

   // loop para calcular o dobro do valor dos elemsntos
   // usando o ponteiro e imprimir os valores
   for( int j = 0; j < 5; j++ )
   {
      // imprimi os valores usando o ponteiro
      printf( "o dobro de %3d é %3d\n", *( vtrPtr + j ), ( *( vtrPtr + j ) * 2 ) );
   } // fim for

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

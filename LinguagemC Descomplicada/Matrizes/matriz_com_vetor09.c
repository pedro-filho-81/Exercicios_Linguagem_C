/*
   Matriz: 9) Faça um programa que permita ao usuário entrar com
   uma matriz de tamanho 3 × 3 de números inteiros. Em seguida,
   calcule um vetor contendo três posições, em que cada posição
   deverá armazenar a soma dos números de cada coluna da matriz.
   Exiba na tela esse array. Por exemplo, a matriz deverá gerar
   o vetor 31, 4, 32.
   Backes, André. Linguagem C (p. 129). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LINHA 3
#define COLUNA 3

// PROTÓTIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
void organizar( int mtz[][ COLUNA ], int vtr[], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void mostrarVetor( int vtr[], int coluna );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // matriz
   int matriz[ LINHA ][ COLUNA ];

   // vetor
   int soma_coluna[ COLUNA ];

   // gerador
   srand( time( NULL ) );

   // CHAMAR função adicionar para atribuir os valores
   adicionar( matriz, LINHA, COLUNA );

   // CHAMAR a função organizar para ordenar os valores conforme orientação
   organizar( matriz, soma_coluna, LINHA, COLUNA );

   // mostrar
   printf( "Matriz:\n" );
   // chamar a função mostrar para exibir a matriz preenchida
   mostrar( matriz, LINHA, COLUNA );

   // mostrar o vetor
   printf( "Mostra um vetor com a soma das colunas da matriz:\n" );
   // chamar a função mostrar vetor
   mostrarVetor( soma_coluna, COLUNA );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUNÇÃO MAIN

// função adicionar valores
void adicionar( int mtz[][ COLUNA ], int linha, int coluna )
{
   //loop para linha
   for( int i = 0; i < linha; i++ ) {

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // matriz recebe valores aleatórios
         mtz[ i ][ j ] = rand() % 100;

      } // fim for interno
   } // fim for externo
} // fim função

// função organizar
void organizar( int mtz[][ COLUNA ], int vtr[], int linha, int coluna )
{
   // loop para linha
   for( int i = 0; i < linha; i++){

      // loop para a coluna
      for( int j = 0; j < coluna; j++){

         // vetor recebe a soma dos valores das colunas da matriz
         vtr[ j ] += mtz[ i ][ j ];

      } // fim for interno
   } // fim for externo
} // fim função organizar

// função mostrar
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // loop para a linha
   for(int i = 0; i < linha; i++ ) {

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // mostrar os valores da matriz
         printf("%5d", mtz[i][j]);

      } // fim for interno

        printf("\n"); // pular uma linha

    } // fim for externo
} // fim função mostrar

// função mostrarVetor
void mostrarVetor( int vtr[], int coluna )
{
   // loop para a coluna
   for( int j = 0; j < coluna; j++ ) {

      // mostrar os valores do vetor
      printf( "%6d", vtr[ j ] );

   } // fim for interno

} // fim função mostrar vetor

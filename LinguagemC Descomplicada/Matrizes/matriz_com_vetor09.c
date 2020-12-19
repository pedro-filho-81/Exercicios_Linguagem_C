/*
   Matriz: 9) Fa�a um programa que permita ao usu�rio entrar com
   uma matriz de tamanho 3 � 3 de n�meros inteiros. Em seguida,
   calcule um vetor contendo tr�s posi��es, em que cada posi��o
   dever� armazenar a soma dos n�meros de cada coluna da matriz.
   Exiba na tela esse array. Por exemplo, a matriz dever� gerar
   o vetor 31, 4, 32.
   Backes, Andr�. Linguagem C (p. 129). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

// biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LINHA 3
#define COLUNA 3

// PROT�TIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
void organizar( int mtz[][ COLUNA ], int vtr[], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void mostrarVetor( int vtr[], int coluna );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // matriz
   int matriz[ LINHA ][ COLUNA ];

   // vetor
   int soma_coluna[ COLUNA ];

   // gerador
   srand( time( NULL ) );

   // CHAMAR fun��o adicionar para atribuir os valores
   adicionar( matriz, LINHA, COLUNA );

   // CHAMAR a fun��o organizar para ordenar os valores conforme orienta��o
   organizar( matriz, soma_coluna, LINHA, COLUNA );

   // mostrar
   printf( "Matriz:\n" );
   // chamar a fun��o mostrar para exibir a matriz preenchida
   mostrar( matriz, LINHA, COLUNA );

   // mostrar o vetor
   printf( "Mostra um vetor com a soma das colunas da matriz:\n" );
   // chamar a fun��o mostrar vetor
   mostrarVetor( soma_coluna, COLUNA );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o adicionar valores
void adicionar( int mtz[][ COLUNA ], int linha, int coluna )
{
   //loop para linha
   for( int i = 0; i < linha; i++ ) {

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // matriz recebe valores aleat�rios
         mtz[ i ][ j ] = rand() % 100;

      } // fim for interno
   } // fim for externo
} // fim fun��o

// fun��o organizar
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
} // fim fun��o organizar

// fun��o mostrar
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
} // fim fun��o mostrar

// fun��o mostrarVetor
void mostrarVetor( int vtr[], int coluna )
{
   // loop para a coluna
   for( int j = 0; j < coluna; j++ ) {

      // mostrar os valores do vetor
      printf( "%6d", vtr[ j ] );

   } // fim for interno

} // fim fun��o mostrar vetor

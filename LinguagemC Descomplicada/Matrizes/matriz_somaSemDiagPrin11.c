/*
   Matriz:11) Fa�a um programa que leia uma matriz de tamanho 5 � 5.
   Calcule e imprima a soma dos elementos dessa matriz que est�o
   acima da diagonal principal.
   Backes, Andr�. Linguagem C (p. 130). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5

// PROT�TIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
int somarSemDiagonal( int mtz[][ COLUNA ], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void cabecalhoDaColuna( int col );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // matriz
   int matriz[ LINHA ][ COLUNA ];

   // vari�vel
   int soma = 0;

   // gerador
   srand( time( NULL ) );

   // CHAMAR fun��o adicionar para atribuir os valores
   adicionar( matriz, LINHA, COLUNA );

   // chamar a fun��o mostrar para exibir a matriz preenchida
   mostrar( matriz, LINHA, COLUNA );

   // CHAMAR a fun��o somar sem diagonal e armazenar o valor a vari�vel soma
   soma = somarSemDiagonal( matriz, LINHA, COLUNA );

   // mostrar a soma
   printf( "\nA soma acima da diagonal principal � %d\n", soma );

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

         // matriz recebe valores aleat�rios entre 1 e 10
         mtz[ i ][ j ] = 1 + rand() % 10;

      } // fim for interno
   } // fim for externo
} // fim fun��o

// fun��o somar sem diagonal
int somarSemDiagonal( int mtz[][ COLUNA ], int linha, int coluna )
{
   // VARI�VEL SOMA = 0;
   int soma = 0;

   // loop para linha
   for( int i = 0; i < linha; i++)
   {
      // loop para a coluna
      for( int j = 0; j < coluna; j++)
      {
         // quando o valor da coluna for maior que a linha
         // o sinal < ( menor que ) atinge os valores abaixo da diagonal principal
         // o sinal > ( maior que ) atinge os valores acima da diagonal principal
         // o sinal == ( igual ) faz refer�ncia a diagonal principal
         if( j > i )
            // somar os valores
            soma += mtz[ i ][ j ];

      } // fim for interno
   } // fim for externo

   // retornar o total da soma
   return soma;

} // fim fun��o organizar

// fun��o mostrar a matriz
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // chamar a fun��o cabe�alho da coluna
   cabecalhoDaColuna( coluna );

   // pular uma linha
   printf( "\n" );

   // loop para a linha
   for(int i = 0; i < linha; i++ )
   {
      // mostrar a numera��o das linhas
      printf( "[%2d]", i + 1 );

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // mostrar os valores da matriz
         printf("%6d", mtz[i][j]);

      } // fim for interno

      printf("\n"); // pular uma linha
    } // fim for externo

} // fim fun��o mostrar

// fun��o cabe�alho da COLUNA
void cabecalhoDaColuna( int col )
{
   // cabe�alho
   printf( "%11s", "[1]" );

   // loop para a numera��o da coluna
   for( int i = 0; i < col - 1; i++ )
   {
      printf( "   [%d]", i + 2 );
   } // fim loop for

   //printf( "\n" );
} // fim da fun��o cabe�alho da coluna

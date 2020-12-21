/*
   Matriz: 12) Faça um programa que leia uma matriz de tamanho 6 × 6.
   Calcule e imprima a soma dos elementos dessa matriz que estão
   abaixo da diagonal principal.
   Backes, André. Linguagem C (p. 130). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LINHA 6
#define COLUNA 6

// PROTÓTIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
int somarAbaixoDiagonal( int mtz[][ COLUNA ], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void cabecalhoDaColuna( int col );

// FUNÇÃO PRINCIPAL
int main()
{
   // configura para português Brasil
   setlocale( LC_ALL, "Portuguese" );

   // matriz
   int matriz[ LINHA ][ COLUNA ];

   // variável
   int soma = 0;

   // gerador
   srand( time( NULL ) );

   // CHAMAR função adicionar para atribuir os valores
   adicionar( matriz, LINHA, COLUNA );

   // chamar a função mostrar para exibir a matriz preenchida
   mostrar( matriz, LINHA, COLUNA );

   // CHAMAR a função somar sem diagonal e armazenar o valor a variável soma
   soma = somarAbaixoDiagonal( matriz, LINHA, COLUNA );

   // mostrar a soma
   printf( "\nA soma abaixo da diagonal principal é %d\n", soma );

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

         // matriz recebe valores aleatórios entre 1 e 10
         mtz[ i ][ j ] = 1 + rand() % 10;

      } // fim for interno
   } // fim for externo
} // fim função

// função somar sem diagonal
int somarAbaixoDiagonal( int mtz[][ COLUNA ], int linha, int coluna )
{
   // VARIÁVEL SOMA = 0;
   int soma = 0;

   // loop para linha
   for( int i = 0; i < linha; i++)
   {
      // loop para a coluna
      for( int j = 0; j < coluna; j++)
      {
         // quando o valor da coluna for menor que a linha
         // o sinal < ( menor que ) atinge os valores abaixo da diagonal principal
         // o sinal > ( maior que ) atinge os valores acima da diagonal principal
         // o sinal == ( igual ) faz referência a diagonal principal
         if( j < i )
            // somar os valores
            soma += mtz[ i ][ j ];

      } // fim for interno
   } // fim for externo

   // retornar o total da soma
   return soma;

} // fim função organizar

// função mostrar a matriz
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // chamar a função cabeçalho da coluna
   cabecalhoDaColuna( coluna );

   // pular uma linha
   printf( "\n" );

   // loop para a linha
   for(int i = 0; i < linha; i++ )
   {
      // mostrar a numeração das linhas
      printf( "[%2d]", i + 1 );

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // mostrar os valores da matriz
         printf("%6d", mtz[i][j]);

      } // fim for interno

      printf("\n"); // pular uma linha
    } // fim for externo

} // fim função mostrar

// função cabeçalho da COLUNA
void cabecalhoDaColuna( int col )
{
   // cabeçalho
   printf( "%11s", "[1]" );

   // loop para a numeração da coluna
   for( int i = 0; i < col - 1; i++ )
   {
      // mostrar cabeçalho da coluna
      printf( "   [%d]", i + 2 );
   } // fim loop for

   //printf( "\n" );
} // fim da função cabeçalho da coluna

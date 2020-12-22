/*
   Matriz: 13) Fa�a um programa que leia uma matriz de tamanho 5 � 5.
   Calcule e imprima a soma dos elementos dessa matriz que n�o
   pertencem � diagonal principal nem � diagonal secund�ria.
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
void somarSemDiagonais( int mtz[][ COLUNA ], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void cabecalhoDaColuna( int col );
void linhas( int tamanho );

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

   // CHAMAR a fun��o somar abaixo  da diagonal e armazenar o valor a vari�vel soma
   somarSemDiagonais( matriz, LINHA, COLUNA );

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

// fun��o somar sem rdiagonal
void somarSemDiagonais( int mtz[][ COLUNA ], int linha, int coluna )
{
   // VARI�VEis
   int somaPrincipal = 0;
   int somaSecundaria = 0;
   int somaAcimaPrincipal = 0;
   int somaAbaixoPrincipal = 0;

   // loop para linha
   for( int i = 0; i < linha; i++)
   {
      // loop para a coluna
      for( int j = 0; j < coluna; j++)
      {
         // o sinal == ( igual ) faz refer�ncia a diagonal principal
         // se linha igual a coluna
         if( j == i )
            // somar a diagonal principal
            somaPrincipal += mtz[ i ][ j ];

         // somar a diagonal secund�ria
         // se a soma de linha e coluna for igual a cinco
         if( (i + j) == 4 )
            // somar a diagonal secund�ria
            somaSecundaria += mtz[ i ][ j ];

         // o sinal > ( maior que ) atinge os valores acima da diagonal principal
         // se a coluna for maior que a linha
         if( j > i )
            // somar acima da diagonal principal
            somaAcimaPrincipal += mtz[ i ][ j ];

         // o sinal < ( menor que ) atinge os valores abaixo da diagonal principal
         // se a coluna for menor que a linha
         if( j < i )
            // somar os valores abaixo da diagonal principal
            somaAbaixoPrincipal += mtz[ i ][ j ];

      } // fim for interno
   } // fim for externo

   // mostrar o resultado
   printf( "A soma da diagonal principal � %d\n", somaPrincipal );
   printf( "A soma da diagonal secund�ria � %d\n", somaSecundaria );
   printf( "A soma dos valores acima da diagonal principal � %d\n", somaAcimaPrincipal );
   printf( "A soma dos valores abaixo da diagonal principal � %d\n", somaAbaixoPrincipal );
   printf( "Valor total da matriz %d\n",
          somaPrincipal + somaSecundaria + somaAcimaPrincipal + somaAbaixoPrincipal  );

} // fim fun��o organizar

// fun��o mostrar a matriz
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // chamar a fun��o cabe�alho da coluna
   cabecalhoDaColuna( coluna );
   // pular uma linha
   printf( "\n" );
   // mostrar uma linha
   linhas( coluna );

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

    // chamar a fun��o linha
    linhas( coluna );
    // pular uma linha
    printf( "\n" );

} // fim fun��o mostrar

// fun��o cabe�alho da COLUNA
void cabecalhoDaColuna( int col )
{
   // cabe�alho primeiro n�mero
   printf( "%11s", "[1]" );

   // loop para a numera��o da coluna
   for( int i = 0; i < col - 1; i++ )
   {
      // mostrar cabe�alho da coluna
      printf( "   [%d]", i + 2 );
   } // fim loop for

   //printf( "\n" );
} // fim da fun��o cabe�alho da coluna

// fun��o linhas
void linhas( int tamanho )
{
   // loop para a numera��o da coluna
   for( int i = 0; i < tamanho * 2.3; i++ )
   {
      // mostrar linha
      printf( "=-=" );
   } // fim for

} // fim da fun��o linhas

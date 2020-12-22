/*
   Matriz: 13) Faça um programa que leia uma matriz de tamanho 5 × 5.
   Calcule e imprima a soma dos elementos dessa matriz que não
   pertencem à diagonal principal nem à diagonal secundária.
   Backes, André. Linguagem C (p. 130). GEN LTC. Edição do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LINHA 5
#define COLUNA 5

// PROTÓTIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
void somarSemDiagonais( int mtz[][ COLUNA ], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );
void cabecalhoDaColuna( int col );
void linhas( int tamanho );

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

   // CHAMAR a função somar abaixo  da diagonal e armazenar o valor a variável soma
   somarSemDiagonais( matriz, LINHA, COLUNA );

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

// função somar sem rdiagonal
void somarSemDiagonais( int mtz[][ COLUNA ], int linha, int coluna )
{
   // VARIÁVEis
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
         // o sinal == ( igual ) faz referência a diagonal principal
         // se linha igual a coluna
         if( j == i )
            // somar a diagonal principal
            somaPrincipal += mtz[ i ][ j ];

         // somar a diagonal secundária
         // se a soma de linha e coluna for igual a cinco
         if( (i + j) == 4 )
            // somar a diagonal secundária
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
   printf( "A soma da diagonal principal é %d\n", somaPrincipal );
   printf( "A soma da diagonal secundária é %d\n", somaSecundaria );
   printf( "A soma dos valores acima da diagonal principal é %d\n", somaAcimaPrincipal );
   printf( "A soma dos valores abaixo da diagonal principal é %d\n", somaAbaixoPrincipal );
   printf( "Valor total da matriz %d\n",
          somaPrincipal + somaSecundaria + somaAcimaPrincipal + somaAbaixoPrincipal  );

} // fim função organizar

// função mostrar a matriz
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // chamar a função cabeçalho da coluna
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
      // mostrar a numeração das linhas
      printf( "[%2d]", i + 1 );

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // mostrar os valores da matriz
         printf("%6d", mtz[i][j]);

      } // fim for interno

      printf("\n"); // pular uma linha

    } // fim for externo

    // chamar a função linha
    linhas( coluna );
    // pular uma linha
    printf( "\n" );

} // fim função mostrar

// função cabeçalho da COLUNA
void cabecalhoDaColuna( int col )
{
   // cabeçalho primeiro número
   printf( "%11s", "[1]" );

   // loop para a numeração da coluna
   for( int i = 0; i < col - 1; i++ )
   {
      // mostrar cabeçalho da coluna
      printf( "   [%d]", i + 2 );
   } // fim loop for

   //printf( "\n" );
} // fim da função cabeçalho da coluna

// função linhas
void linhas( int tamanho )
{
   // loop para a numeração da coluna
   for( int i = 0; i < tamanho * 2.3; i++ )
   {
      // mostrar linha
      printf( "=-=" );
   } // fim for

} // fim da função linhas

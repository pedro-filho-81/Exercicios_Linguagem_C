/*
   Matriz: 10) Leia uma matriz de tamanho 10 � 3 com as notas de
   10 alunos em tr�s provas. Em seguida, calcule e escreva na tela
   o n�mero de alunos cuja pior nota foi na prova 1, o n�mero de
   alunos cuja pior nota foi na prova 2 e o n�mero de alunos cuja
   pior nota foi na prova 3.
   Backes, Andr�. Linguagem C (p. 130). GEN LTC. Edi��o do Kindle.
   Auto: Pedro Filho, 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHA 10
#define COLUNA 3

// PROT�TIPOS
void adicionar( int mtz[][ COLUNA ], int linha, int coluna );
void verificarNotas( int mtz[][ COLUNA ], int linha, int coluna );
void mostrar( int mtz[][ COLUNA ], int linha, int coluna );

// FUN��O PRINCIPAL
int main()
{
   // configura para portugu�s Brasil
   setlocale( LC_ALL, "Portuguese" );

   // matriz
   int matriz[ LINHA ][ COLUNA ];

   // gerador
   srand( time( NULL ) );

   // CHAMAR fun��o adicionar para atribuir
   // as notas das provas dos alunos
   adicionar( matriz, LINHA, COLUNA );

   // chamar a fun��o mostrar para exibir a matriz preenchida
   mostrar( matriz, LINHA, COLUNA );

   // CHAMAR a fun��o verificar as notas
   verificarNotas( matriz, LINHA, COLUNA );

   // pular uma linha
   printf( "\n" );

   // pausar
   system( "pause" );

   // fim do programa
   return 0;

}  // FIM FUN��O MAIN

// fun��o adicionar notas dos alunos
void adicionar( int mtz[][ COLUNA ], int linha, int coluna )
{
   //loop para linha
   for( int i = 0; i < linha; i++ ) {

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // matriz recebe notas entre 1 e 10 aleat�rios
         mtz[ i ][ j ] = 1 + rand() % 10;

      } // fim for interno
   } // fim for externo
} // fim fun��o

// fun��o mostrar
void mostrar( int mtz[][ COLUNA ], int linha, int coluna )
{
   // cabe�alho da tabela
   printf( "%16s", "Provas:\n" );
   printf( "Alunos: %3s%6s%6s", "[1]", "[2]", "[3]\n" );
   printf( "=-=-=-=-=-=-=-=-=-=-=-=\n" );

   // loop para a linha
   for(int i = 0; i < linha; i++ ) {

      // mostrar a numera��o dos alunos
      printf( "[%2d]", i + 1 );

      // loop para a coluna
      for( int j = 0; j < coluna; j++ ) {

         // mostrar  a nota dos alunos
         printf("%6d", mtz[i][j]);

      } // fim for interno

      printf("\n"); // pular uma linha
    } // fim for externo

   // redap�
   printf( "=-=-=-=-=-=-=-=-=-=-=-=\n" );
   printf( "%25s", "Notas entre 1 e 10.\n" );
   printf( "%22s", "Nota 1 � a pior.\n" );

} // fim fun��o mostrar

// fun��o organizar
void verificarNotas( int mtz[][ COLUNA ], int linha, int coluna )
{
   // vari�veis
   int contar1 = 0,  contar2 = 0, contar3 = 0;

   // loop para percorrer a linha
   for( int j = 0; j < linha; j++ )
   {
      // verificar se a matriz  coluna zero tem o valor 1
      if( mtz[ j ][ 0 ] == 1 ) {
         contar1++; // contar
      } // fim if

      // verificar se a matriz  coluna um tem o valor 1
      if( mtz[ j ][ 1 ] == 1 ) {
         contar2++; // contar
      } // fim if

      // verificar se a matriz  coluna dois tem o valor 1
      if( mtz[ j ][ 2 ] == 1 ) {
         contar3++; // contar
      } // fim if
   } // fim for

   // resultado das provas
   printf("\nNa prova 1 temos: %d aluno(s) com a(s) pior(es) nota(s).\n", contar1);
   printf("Na prova 2 temos: %d aluno(s) com a(s) pior(es) nota(s).\n", contar2);
   printf("Na prova 3 temos: %d aluno(s) com a(s) pior(es) nota(s).\n", contar3);
} // fim fun��o verificar valor

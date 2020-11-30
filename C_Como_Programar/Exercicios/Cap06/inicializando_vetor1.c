/*
    Função: inicializando um vetor
    Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // define o tamanho para 10 elementos

// protótipos
int add_valor( int vt[], int size );
int mostrar_vetor( int vt[], int size );

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criando um vetor
   int vetor[ SIZE ];

   // gerador
   srand( time( NULL ) );
   // chamar a função adicionar valores
   add_valor( vetor, SIZE );

   printf( "Os valores do vetor:\n" );
   // Chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adiciona valores
int add_valor( int vt[], int size )
{
   // loop para adicionar valores no vetor
   for( int i = 0; i < size; i++ ) {
      // gerar números aleátorios e adicionar ao vetor
      vt[ i ] = 1 + rand() % 100;
   } // fim for adicionar
} // função adicionar

// função mostrar vetor
int mostrar_vetor( int vt[], int size )
{
   // loop for para mostrar os valores do vetor
   for( int i = 0; i < size; i++ ) {
      // mostrar os valores do vetor
      printf( "%d ", vt[ i ] );
   } // fim loop for
} // fim função mostrar valores

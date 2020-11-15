/*
    Fun��o: 5.25 Achar o m�nimo. Escreva uma fun��o que retorne o  menor de
    tr�s n�meros em ponto flutuante.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 154). Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
float minimo( float a, float b, float c );

int main()
{
    // seleciona o idioma portugu�s
    setlocale( LC_ALL, "Portuguese" );

   // criar 3 vari�veis
   float n1, n2, n3;

   // entrada de dados
   printf( "Digite 3 n�meros diferentes: " );
   scanf( "%f%f%f", &n1, &n2, &n3 );

   // mostrar o resultado
   printf( "O menor n�mero � %.2f\n", minimo( n1, n2, n3));

    // pula linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    return 0; // fim do programa

} // fim da fun��o main

// function minimo
float minimo( float a, float b, float c )
{
   // menor coma�a com o parametro a
   float menor = a;
   // verificar se b menor que menor
   if( b < menor ) // se verdade
      menor = b; // menor recebe b
   // verificar se c menor que menor
   if( c < menor ) // se verdade
      menor = c; // menor recebe c
   return menor; // retornar o menor valor

} // fim da fun��o

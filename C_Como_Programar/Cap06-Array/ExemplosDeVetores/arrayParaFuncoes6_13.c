/*
    Questão: Figura 6.13: fig06_13.c  2 Passando arrays e elementos individuais do array para funções
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 176). Edição do Kindle.
    Autor: Pedro Filho, 03/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 5

// PROTÓTIPOS
void modificarArray( int vetor[], int size );
void modificarElementos( int e );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int vtr[ SIZE ] = {0, 1, 2, 3, 4 };
    int i;

    printf( "Efeitos da passagem do array inteiro por referência:\n\nOs "
           "valores do array original são:\n" );

    // loop para mostrar o vetor original
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%3d", vtr[ i ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // chama a função modificar array
    modificarArray( vtr, SIZE );

    printf( "Os valores do array modificado são:\n" );

    // loop para mostrar o vetor modificado
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%d ", vtr[ i ] );
    } // fim for

    printf( "\nEfeitos da passar elementos do array por valor:\n\nO "
           "valor de vtr[ 3 ] é %d\n", vtr[ 3 ] );

    // chama a função modificar elementos
    modificarElementos( vtr[ 3 ] );

    printf( "O valor modificado de vtr[ 3 ] é %d\n", vtr[ 3 ] );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função modificarArray
void modificarArray( int vetor[], int size )
{
    int j;

    for( j = 0; j < size; j++ )
    {
        vetor[ j ] *= 2;
    }
}

// função modificarElementos
void modificarElementos( int e )
{
    printf( "O valor na função modificarElementos é %d\n", e *= 2 );
}

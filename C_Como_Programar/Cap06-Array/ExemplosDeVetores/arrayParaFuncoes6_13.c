/*
    Quest�o: Figura 6.13: fig06_13.c  2 Passando arrays e elementos individuais do array para fun��es
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 176). Edi��o do Kindle.
    Autor: Pedro Filho, 03/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 5

// PROT�TIPOS
void modificarArray( int vetor[], int size );
void modificarElementos( int e );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int vtr[ SIZE ] = {0, 1, 2, 3, 4 };
    int i;

    printf( "Efeitos da passagem do array inteiro por refer�ncia:\n\nOs "
           "valores do array original s�o:\n" );

    // loop para mostrar o vetor original
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%3d", vtr[ i ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // chama a fun��o modificar array
    modificarArray( vtr, SIZE );

    printf( "Os valores do array modificado s�o:\n" );

    // loop para mostrar o vetor modificado
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%d ", vtr[ i ] );
    } // fim for

    printf( "\nEfeitos da passar elementos do array por valor:\n\nO "
           "valor de vtr[ 3 ] � %d\n", vtr[ 3 ] );

    // chama a fun��o modificar elementos
    modificarElementos( vtr[ 3 ] );

    printf( "O valor modificado de vtr[ 3 ] � %d\n", vtr[ 3 ] );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o modificarArray
void modificarArray( int vetor[], int size )
{
    int j;

    for( j = 0; j < size; j++ )
    {
        vetor[ j ] *= 2;
    }
}

// fun��o modificarElementos
void modificarElementos( int e )
{
    printf( "O valor na fun��o modificarElementos � %d\n", e *= 2 );
}

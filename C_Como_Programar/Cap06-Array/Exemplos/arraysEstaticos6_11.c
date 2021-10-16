/*
    Figura 6.11: fig06_11.c  2 Arrays estáticos são inicializados em zero
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 173). Edição do Kindle.
    08/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos
void automaticoArrayInit();
void estaticoArrayInit();

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis

    // imprime
    printf( "Primeira chamada para cada função:\n" );
    automaticoArrayInit();
    estaticoArrayInit();

    // imprime
    printf( "\n\nSegunda chamada paracada função:\n");
    automaticoArrayInit();
    estaticoArrayInit();

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função estaticoArrayInit
void estaticoArrayInit()
{
    static int array1[ 3 ];
    int i;

    printf( "\nValores na entrada de estaticpArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] );
    } // fim for

    printf( "\nValores na saída de estaticpArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] += 5 );
    } // fim for

} // fim função

void automaticoArrayInit()
{

    static int array1[ 3 ] = {1, 2, 3};
    int i;

    printf( "\n\nValores na entrada de automaticoArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] );
    } // fim for

    printf( "\nValores na saída de automaticoArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] += 5 );
    } // fim for
}

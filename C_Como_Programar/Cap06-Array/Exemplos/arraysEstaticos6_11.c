/*
    Figura 6.11: fig06_11.c  2 Arrays est�ticos s�o inicializados em zero
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 173). Edi��o do Kindle.
    08/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipos
void automaticoArrayInit();
void estaticoArrayInit();

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis

    // imprime
    printf( "Primeira chamada para cada fun��o:\n" );
    automaticoArrayInit();
    estaticoArrayInit();

    // imprime
    printf( "\n\nSegunda chamada paracada fun��o:\n");
    automaticoArrayInit();
    estaticoArrayInit();

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o estaticoArrayInit
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

    printf( "\nValores na sa�da de estaticpArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] += 5 );
    } // fim for

} // fim fun��o

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

    printf( "\nValores na sa�da de automaticoArrayInit()\n" );

    // loop for
    for( i = 0; i < 3; i++ )
    {
        printf( "array[ %d ] = %d ", i, array1[ i ] += 5 );
    } // fim for
}

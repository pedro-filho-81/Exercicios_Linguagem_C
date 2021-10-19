/*
    1 /* Figura 6.21: fig06_21.c
    2 Inicializando arrays multidimensionais
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 190). Edição do Kindle.
    19/10/2021
*/

#include <stdio.h>
#include <stdlib.h> // para system
#include <locale.h> // para setlocale

// protótipo
void printMatrizes( const int matriz[][ 3 ] );

// função principal
int main()
{
    // localização geográfica ( UTF-8 )
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variable
    int array1[ 2 ][ 3 ] = { {1, 2, 3}, {4, 5, 6} };
    int array2[ 2 ][ 3 ] = { {1, 2, 3 }, { 4, 5} };
    int array3[ 2 ][ 3 ] = { {1, 2 }, { 4 } };

    // diaplay
    printf( "Valores do array1 por linha\n" );
    printMatrizes( array1 );

    // diaplay
    printf( "Valores do array2 por linha\n" );
    printMatrizes( array2 );

    // diaplay
    printf( "Valores do array3 por linha\n" );
    printMatrizes( array3 );

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// create function printMatrizes
void printMatrizes( const int matriz[] [ 3 ] )
{
    // variable
    int i, j;

    // loop for show array elements
    for( i = 0; i <= 1; i++ )
    {
        for( j = 0; j <= 2; j++ ) {
            printf( "%3d ", matriz[ i ][ j ] );
        } // end for

        printf( "\n" ); // next line

    } // end for
} // end function printMatrizes


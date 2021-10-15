/*
    Figura 6.6: fig06_06.c
    2 Calcula a soma dos elementos do array
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 167). Edição do Kindle.
    04/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 12

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int a[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
    int i; // contador de for
    int total = 0; // soma o vetor

    //  loop para somar o vetor
    for( i = 0; i < SIZE; i++ ) {
        // soma o vetor
        total += a[ i ];
    } // fim for

    printf( "O Total dos valores dos elementos do vetor é %d\n", total );

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

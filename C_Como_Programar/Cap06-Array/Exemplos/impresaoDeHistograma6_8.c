/*
    Figura 6.8: fig06_08.c
    2 Programa de impress�o de histograma
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 169). Edi��o do Kindle.
    07/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 8

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int n[ SIZE] = { 35, 30, 25, 20, 15, 10, 5, 1 };
    int i;
    int j;

    printf( "%s%13s%17s\n", "Elemento", "Valor", "Histograma" );

    // loop para mostrar vetor
    for( i = 0; i < SIZE; i++ )
    {
        // imprime o �ndice, valor do vetor e espa�o em branco
        printf( "%5d%13d%10s", i, n[ i ], " " );

        // loop para mostrar o histograma
        for( j = 1; j <= n[ i ]; j++ )
        {
            // imprime asterosco
            printf( "%c", '*' );
        } // fim for interno

        printf( "\n" ); // pula linha

    } // fim for externo

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

/*
    Questão: /* Figura 6.8: fig06_08.c  2 Programa de impressão de histograma
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 169). Edição do Kindle.
    Autor: Pedro Filho, 07/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int n[ SIZE] = { 18, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i;
    int j;

    printf( "%s%13s%17s\n", "Elemento", "Valor", "Histograma" );

    // loop para mostrar vetor
    for( i = 0; i < SIZE; i++ )
    {
        printf( "%5d%13d%10s", i, n[ i ], " " );

        // loop para mostrar o histograma
        for( j = 1; j <= n[ i ]; j++ )
        {
            printf( "%c", '*' );
        } // fim for interno

        printf( "\n" );

    } // fim for externo

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

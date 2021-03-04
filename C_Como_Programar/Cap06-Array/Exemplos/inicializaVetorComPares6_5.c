/*
    Questão: /* Figura 6.5: fig06_05.c  2 Inicializa elementos do array s como inteiros pares de 2 a 20
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 165). Edição do Kindle.
    Autor: Pedro Filho, 04/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10 // tamanho máximo do vetor

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vetor
    int s[ SIZE ];  // vetor para 10 elementos
    int i; // contador para for

    // loop para adicionar valor
    for( i = 0; i < SIZE; i++ ) {
        // adiciona valor
        s[ i ] = 2 + 2 * i;
    } // fim for

    // cabeçalho
    printf( "%s%10s\n", "Elemento", "Valor" );

    // loop para mostra valor
    for( i = 0; i < SIZE; i++ ) {
        // mostra valor
        printf( "   s[%d]%8d\n", i, s[ i ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

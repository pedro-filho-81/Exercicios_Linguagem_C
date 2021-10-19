/*
    Figura 6.4: fig06_04.c
    2 Inicializando um array com uma lista de inicializadores
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 164). Edição do Kindle.
    03/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vetor
    int n [ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 60, 71, 37 };
    int i; // contador

    // cabeçalho
    printf( "%s%10s\n", "Elemento", "Valor" );

    // loop para mostrar os valores do vetor
    for( i = 0; i < 10; i++ ) {
        // imprimir
        printf( "  n[%d]%5s%6d\n", i, "=", n[ i ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

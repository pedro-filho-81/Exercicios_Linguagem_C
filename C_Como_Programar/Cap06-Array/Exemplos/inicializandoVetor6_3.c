/*
    Questão: Figura 6.3: fig06_03.c  2 Inicializando um array
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 163). Edição do Kindle.
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
    int n[ 10 ]; // n é um array de 10 elementos
    int i; // contador

    // loop para adicionar valores ao vetor n
    for( i = 0; i < 10; i++ ) {
        // atribui o valor zero a cada elemento do vetor
        n[ i ] = 0;
    } // fim for

    // imprime
    printf( "%s%13s\n", "Elemento", "Valor" );

    // loop para mostrar os elementos e valores do vetor
    for( i = 0; i < 10; i++ ){
        // imprime os elementos e o valor zero de cada elemento
        printf( "%7d%13d\n", i, n[ i ] );
    } // fim for imprime elementos

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

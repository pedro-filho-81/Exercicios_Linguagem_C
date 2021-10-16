/*
    Questão: array com mesmo endereço
    08/03/2021
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

    // variáveis
    int array[ 5 ]; // array com 5 elementos

    printf( "Arrays diferentes com o mesmo endereço\n" );
    printf( "array = %p\n&array[ 0 ] = %p\n&array = %p\n",
           array, &array[ 0 ], &array );

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

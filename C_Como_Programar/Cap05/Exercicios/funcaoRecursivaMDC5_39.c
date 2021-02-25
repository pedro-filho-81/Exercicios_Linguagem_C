/*
    Questão: 5.39 Máximo divisor comum recursivo. O máximo divisor  comum
    dos inteiros x e y é o maior inteiro que divide x e  y sem gerar resto.
    Escreva uma função recursiva mdc que  retorne o máximo divisor comum
    de x e y. O mdc de x e y  é definido recursivamente da seguinte forma:
    se y é igual  a 0, então mdc(x, y) é x; caso contrário, mdc(x, y)  é mdc(y, x% y),
    onde% é o operador de módulo (ou  resto da divisão).
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edição do Kindle.
    Autor: Pedro Filho, 25/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
long mdcRecursivo( long x, long y );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    long a = 0;
    long b = 0;
    int resposta = 1;

    // enquanto resposta diferente de zero faça
    while( resposta != 0 ) {

        // entrada de dados
        printf( "Digite 2 números para ver o mdc: " );
        scanf( "%d%d", &a, &b );

        // mostra e chama a função mdc
        printf( "O MDC de %d e %d é %d\n", a, b, mdcRecursivo( a, b ) );

        // deseja continuar
        printf( "Deseja continuar [ 1 - sim / 0 - não ]? " );
        scanf( "%d", &resposta );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função mdcRecursivo
long mdcRecursivo( long x, long y )
{
    // se y igual a zero
    if( y == 0) {
        // retorne x;
        return x;
    } // fim if

    // se não
    else {
        // retorne mdc
        return mdcRecursivo( y, x % y );
    } // fim else

} // fim function

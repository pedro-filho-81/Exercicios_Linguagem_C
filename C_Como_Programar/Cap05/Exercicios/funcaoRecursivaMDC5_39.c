/*
    Quest�o: 5.39 M�ximo divisor comum recursivo. O m�ximo divisor  comum
    dos inteiros x e y � o maior inteiro que divide x e  y sem gerar resto.
    Escreva uma fun��o recursiva mdc que  retorne o m�ximo divisor comum
    de x e y. O mdc de x e y  � definido recursivamente da seguinte forma:
    se y � igual  a 0, ent�o mdc(x, y) � x; caso contr�rio, mdc(x, y)  � mdc(y, x% y),
    onde% � o operador de m�dulo (ou  resto da divis�o).
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 157). Edi��o do Kindle.
    Autor: Pedro Filho, 25/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
long mdcRecursivo( long x, long y );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    long a = 0;
    long b = 0;
    int resposta = 1;

    // enquanto resposta diferente de zero fa�a
    while( resposta != 0 ) {

        // entrada de dados
        printf( "Digite 2 n�meros para ver o mdc: " );
        scanf( "%d%d", &a, &b );

        // mostra e chama a fun��o mdc
        printf( "O MDC de %d e %d � %d\n", a, b, mdcRecursivo( a, b ) );

        // deseja continuar
        printf( "Deseja continuar [ 1 - sim / 0 - n�o ]? " );
        scanf( "%d", &resposta );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o mdcRecursivo
long mdcRecursivo( long x, long y )
{
    // se y igual a zero
    if( y == 0) {
        // retorne x;
        return x;
    } // fim if

    // se n�o
    else {
        // retorne mdc
        return mdcRecursivo( y, x % y );
    } // fim else

} // fim function

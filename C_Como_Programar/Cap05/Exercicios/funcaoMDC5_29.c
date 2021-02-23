/*
    Quest�o: 5.29 M�ximo divisor comum. O m�ximo divisor comum  (MDC)
    de dois inteiros � o maior inteiro que divide cada  um dos dois n�meros sem
    deixar resto. Escreva a fun��o  mdc que retorna
    o m�ximo divisor comum de dois inteiros.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 17/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void maximoDivisorComum( int dividendo, int divisor );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int dividendo;
    int divisor;
    int resp = 0;

    // entrada de dados
    printf( "Digite dois inteiros diferentes: " );
    scanf( "%d%d", &dividendo, &divisor );

    while( resp != -1 ) {

        // chamar a fun��o mdc
        maximoDivisorComum ( dividendo, divisor );

        // perguntar se quer continuar
        printf( "\nQuer continuar [ 1 sim / -1 sair ]?" );
        scanf( "%d", &resp );

        // se resp igual a -1 sair do programa
        if( resp == -1 ) break;

        // entrada de dados
        printf( "Digite dois inteiros diferentes: " );
        scanf( "%d%d", &dividendo, &divisor );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o maximoDivisorComum
void maximoDivisorComum( int dividendo, int divisor )
{

    int resto = 0;

    while( divisor != 0 ) {

        // primeira divis�o
        resto = dividendo % divisor;
        printf( "Resto = %d %% %d = %d\n", dividendo, divisor, resto );

        // dividendo recebe divisor
        dividendo = divisor;

        // divisor recebe resto
        divisor = resto;

        if( divisor != 0 ) {

        // segunda divis�o
        resto = dividendo % divisor;

        } // fim if

    } // fim while
    printf( "MDC = %d\n", dividendo );

} // fim fun��o

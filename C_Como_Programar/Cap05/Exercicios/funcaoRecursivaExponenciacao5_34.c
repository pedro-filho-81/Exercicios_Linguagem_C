/*
    Quest�o: 5.34 Exponencia��o recursiva. Escreva uma fun��o recursiva
    power( base, expoente) que, quando chamada, retorna  baseexpoente
    Por exemplo, power( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um
    inteiro maior ou igual  a 1. Dica: a etapa de recurs�o usaria o relacionamento
    baseexpoente = base * baseexpoente�1  e a condi��o de t�rmino ocorre
    quando expoente �  igual a 1, pois  base1 = base
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 23/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int exponenciacao( int base, int expoente );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int base = 0;
    int expo = 0;

    // entrada de dados
    printf( "Digite o valor da base: " );
    scanf( "%d", &base );

    printf( "Digite o expoente: " );
    scanf( "%d", &expo );

    // imprima o resultado
    printf( "%d elevado a %d� pot�ncia � %d\n", base, expo, exponenciacao( base, expo ) );

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o exponencial
int exponenciacao( int base, int expoente )
{
    // se expoente igual a zero
    if( expoente == 0 )
        // retorne um
        return 1;

    // se n�o
    else
        // retorne base vazes a fun��o exponencia��o
        return base * exponenciacao( base, expoente - 1 );

} // fim fun��o exponenciacao

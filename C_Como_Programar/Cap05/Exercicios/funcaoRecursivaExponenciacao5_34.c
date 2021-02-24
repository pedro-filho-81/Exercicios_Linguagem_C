/*
    Questão: 5.34 Exponenciação recursiva. Escreva uma função recursiva
    power( base, expoente) que, quando chamada, retorna  baseexpoente
    Por exemplo, power( 3, 4) = 3 * 3 * 3 * 3.  Suponha que expoente seja um
    inteiro maior ou igual  a 1. Dica: a etapa de recursão usaria o relacionamento
    baseexpoente = base * baseexpoente–1  e a condição de término ocorre
    quando expoente é  igual a 1, pois  base1 = base
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 23/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int exponenciacao( int base, int expoente );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int base = 0;
    int expo = 0;

    // entrada de dados
    printf( "Digite o valor da base: " );
    scanf( "%d", &base );

    printf( "Digite o expoente: " );
    scanf( "%d", &expo );

    // imprima o resultado
    printf( "%d elevado a %dª potência é %d\n", base, expo, exponenciacao( base, expo ) );

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função exponencial
int exponenciacao( int base, int expoente )
{
    // se expoente igual a zero
    if( expoente == 0 )
        // retorne um
        return 1;

    // se não
    else
        // retorne base vazes a função exponenciação
        return base * exponenciacao( base, expoente - 1 );

} // fim função exponenciacao

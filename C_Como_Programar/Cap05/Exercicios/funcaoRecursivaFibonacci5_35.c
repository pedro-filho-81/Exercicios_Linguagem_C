/*
    Questão: 5.35 Fibonacci. A série de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21, …
    começa com os termos 0 e 1, e tem a propriedade de  estabelecer que o termo
    seguinte é a soma dos dois termos anteriores. a) Escreva uma função não
    recursiva  fibonacci(n) que calcule o n-ésimo número de Fibonacci.
    b) Determine o maior número de Fibonacci que  pode ser impresso no seu sistema.
    Modifique o programa da parte a) para usar double em vez de int para
    calcular e retornar números de Fibonacci. Faça com que  o programa se repita
    até que falhe devido a um valor excessivamente alto.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edição do Kindle.
    Autor: Pedro Filho, 23/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
long fibonacci( long numero );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    long num = 0;
    int resp = 1;

    // enquanto resposta maior que zero faça
    while( resp > 0 )
    {
        // cabeçalho
        printf( "SEQUÊNCIA DE FIBONACCI\n" );

        // entrada de dados
        printf( "Digite um número: " );
        scanf( "%d", &num );

        // mostra resultado
        printf( "O %dº número de fibonacci é %d\n", num, fibonacci( num ) );

        // pergunta se quer continuar
        printf( "Deseja continuar [ 1 - sim / 0 - não ]? " );
        scanf( "%d", &resp );

        // se resposta igual a 1
        if ( resp == 0 ) {
            // sair do programa
            break;
        } // fim if

        // se não
        else {
            // limpa a tela
            system( "cls" );
        } // fim else

    } //fim fibonacci

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função recursiva fibonacci
long fibonacci( long numero )
{
    // se número igual a zero ou um
    if( numero == 0 || numero == 1 )
        // retorne o número
        return numero;
    // se não
    else
        // retorne o valor de fibonacci
        return fibonacci( numero - 1 ) + fibonacci( numero - 2 );

} // fim função fibonacci

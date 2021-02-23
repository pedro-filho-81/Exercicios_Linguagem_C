/*
    Quest�o: 5.35 Fibonacci. A s�rie de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21, �
    come�a com os termos 0 e 1, e tem a propriedade de  estabelecer que o termo
    seguinte � a soma dos dois termos anteriores. a) Escreva uma fun��o n�o
    recursiva  fibonacci(n) que calcule o n-�simo n�mero de Fibonacci.
    b) Determine o maior n�mero de Fibonacci que  pode ser impresso no seu sistema.
    Modifique o programa da parte a) para usar double em vez de int para
    calcular e retornar n�meros de Fibonacci. Fa�a com que  o programa se repita
    at� que falhe devido a um valor excessivamente alto.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 156). Edi��o do Kindle.
    Autor: Pedro Filho, 23/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
long fibonacci( long numero );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    long num = 0;
    int resp = 1;

    // enquanto resposta maior que zero fa�a
    while( resp > 0 )
    {
        // cabe�alho
        printf( "SEQU�NCIA DE FIBONACCI\n" );

        // entrada de dados
        printf( "Digite um n�mero: " );
        scanf( "%d", &num );

        // mostra resultado
        printf( "O %d� n�mero de fibonacci � %d\n", num, fibonacci( num ) );

        // pergunta se quer continuar
        printf( "Deseja continuar [ 1 - sim / 0 - n�o ]? " );
        scanf( "%d", &resp );

        // se resposta igual a 1
        if ( resp == 0 ) {
            // sair do programa
            break;
        } // fim if

        // se n�o
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

} // fim fun��o main

// fun��o recursiva fibonacci
long fibonacci( long numero )
{
    // se n�mero igual a zero ou um
    if( numero == 0 || numero == 1 )
        // retorne o n�mero
        return numero;
    // se n�o
    else
        // retorne o valor de fibonacci
        return fibonacci( numero - 1 ) + fibonacci( numero - 2 );

} // fim fun��o fibonacci

/*
    Quest�o: 5.28 Invertendo d�gitos. Escreva uma fun��o que leia um  valor
    inteiro e retorne o n�mero com seus d�gitos invertidos. Por exemplo, dado
    o n�mero 7631, a fun��o dever�  retornar 1367.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 17/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
void inverteNumero( int numero );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int numero = 0;
    int resposta = 0;

    // cabe�alho
    printf( "\tINVERTENDO UM N�MERO\n" );

    // entrada de dados
    printf( "Digite um n�mero entre 1 e 99999: " );
    scanf( "%d", &numero );

    // enquando resposta diferente de -1 fa�a
    while( resposta != -1 )
    {
        // chama a fun��o inverte n�mero
        inverteNumero( numero );

        // pergunta se quer continuar
        printf( "\nDeseja continuar [ 1 sim / -1 n�o ]? " );
        scanf( "%d", &resposta );

        // se resposta igual a -1 sair do programa
        if( resposta == -1 ) break;

        // entrada de dados
        printf( "Digite um n�mero entre 1 e 99999: " );
        scanf( "%d", &numero );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// cria a fun��o inverteNumero
void inverteNumero( int numero )
{
    // vari�veis
    int a, b, c, d, e;

        // calculando e invertendo o n�mero
        a = numero % 10 / 1;
        b = numero % 100 / 10;
        c = numero % 1000 / 100;
        d = numero % 10000 / 1000;
        e = numero / 10000 % 10000;

        // mostrando resultado
        // se o n�mero for menor que dez
        if( numero < 10 )
            // imprima
            printf( "O n�mero %d invertido � %d\n", numero, a );

        // se o n�mero for maior que dez e menor que cem
        else if( numero >= 10 && numero < 100 )
            // imprima
            printf( "O n�mero %d invertido � %d%d\n", numero, a, b );

        // se o n�mero for maior ou igual a dez e menor que mil
        else if( numero >= 100 && numero < 1000 )
            // imprima
            printf( "O n�mero %d invertido � %d%d%d\n", numero, a, b, c );

        // se o n�mero for maior ou igual a mil e menor que dez mil
        else if( numero >= 1000 && numero < 10000 )
            // imprima
            printf( "O n�mero %d invertido � %d%d%d%d\n", numero, a, b, c, d );

        // se o n�mero for maior ou igual a dez mil e menor que 99999
        else if( numero >= 10000 && numero <= 99999 )
            // imprima
            printf( "O n�mero %d invertido � %d%d%d%d%d\n", numero, a, b, c, d, e );

        // se n�o
        else
            // imprima
            printf( "Erro! n�mero inv�lido!" );

} // fim fun��o inverte n�mero

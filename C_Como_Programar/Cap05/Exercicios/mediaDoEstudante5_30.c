/*
    Quest�o: 5.30 Escreva uma fun��o qualityPoints que pe�a a m�dia  de um
    estudante e retorne 4 se a m�dia for 90-100, 3 se  a m�dia for 80-89,
    2 se a m�dia for 70-79, 1 se a m�dia  for 60-69 e 0 se a m�dia for menor que 60.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// prot�tipo
int mediaEstudante( int media );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int med = 0;
    int resp = 0;
    int nota = 0;

    // entrada de dados
    printf( "Digite a m�dia entre 0 e 100: " );
    scanf( "%d", &med );

    // enquanto diferente de -1
    while( resp != -1 ) {

        // mostra resultado
        printf( "RESULTADO DA NOTA:\n" );
        printf( "4 excelente, 3 bom, 2 ruim, 1 p�ssimo, 0 sem coment�rios.\n" );
        printf( "M�dia %d, Nota: %d\n", med, mediaEstudante( med ) );

        // perguntar
        printf( "\nDeseja continuar [ 1 sim / -1 n�o ]? " );
        scanf( "%d", &resp );

        // se resp igual a -1 sair do programa
        if( resp == -1 ) break;

        // entrada de dados
        printf( "Digite a m�dia entre 0 e 100: " );
        scanf( "%d", &med );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// fun��o mediaEstudante
int mediaEstudante( int media )
{
    // condi��es
    // se m�dia maior ou igual a zero e menor que 60
    if( media < 60 ) {
        return 0; // retorne zero
    } // fim if

    else if( media <= 69 ) {
        return 1; // retorne 1
    } // fim else if

    else if( media <= 79 ) {
        return 2; // retorne 2
    } // fim else if

    else if( media <= 89 ) {
        return 3; // retorne 3
    } // fim else if

    else if( media <= 100 ) {
        return 4; // retorne 4
    } // fim else if

} // fim fun��o

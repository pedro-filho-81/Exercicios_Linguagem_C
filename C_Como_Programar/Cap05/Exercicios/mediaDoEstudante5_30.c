/*
    Questão: 5.30 Escreva uma função qualityPoints que peça a média  de um
    estudante e retorne 4 se a média for 90-100, 3 se  a média for 80-89,
    2 se a média for 70-79, 1 se a média  for 60-69 e 0 se a média for menor que 60.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipo
int mediaEstudante( int media );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int med = 0;
    int resp = 0;
    int nota = 0;

    // entrada de dados
    printf( "Digite a média entre 0 e 100: " );
    scanf( "%d", &med );

    // enquanto diferente de -1
    while( resp != -1 ) {

        // mostra resultado
        printf( "RESULTADO DA NOTA:\n" );
        printf( "4 excelente, 3 bom, 2 ruim, 1 péssimo, 0 sem comentários.\n" );
        printf( "Média %d, Nota: %d\n", med, mediaEstudante( med ) );

        // perguntar
        printf( "\nDeseja continuar [ 1 sim / -1 não ]? " );
        scanf( "%d", &resp );

        // se resp igual a -1 sair do programa
        if( resp == -1 ) break;

        // entrada de dados
        printf( "Digite a média entre 0 e 100: " );
        scanf( "%d", &med );

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função mediaEstudante
int mediaEstudante( int media )
{
    // condições
    // se média maior ou igual a zero e menor que 60
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

} // fim função

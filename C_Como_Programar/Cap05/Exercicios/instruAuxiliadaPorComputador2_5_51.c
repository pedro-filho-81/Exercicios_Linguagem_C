/*
    Quest�o:
    Autor: Pedro Filho, 17/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos
int geraNumAleatorio();
int pergunta( int numero1, int numero2 );
void mensagemBoa( int opcao );
void mensagemRuim( int opcao );

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int num1, num2;
    int  multi = 0;
    int resultado = 0;
    int resposta = 1;

    // cabe�alho
    printf( "INSTRU��O AUXILIADA POR COMPUTADOR\n" );

    // enquanto resposta diferente de zero fa�a
    while( resposta != 0 ) {

        // gerador
        srand( time( NULL ) );

        // num1 e num2 recebe fun��o geraNumAleatorio
        num1 = geraNumAleatorio();
        num2 = geraNumAleatorio();

        // multiplica num1 por num2
        multi = num1 * num2;

        // enquanto o resultado for diferente de multi fa�a
        while( resultado != multi ) {

            // resultado recebe o valor retornado pela fun��o pergunta
            resultado = pergunta( num1, num2 );

            // se resultado igual a zero fim do programa
            if( resultado == 0 ) {

                // resposta recebe zero
                resposta = 0;
                // para o programa
                break;
            } // fim if

            // se resultado igual a multi
            if( resultado == multi ) {

                // mostra mensagem boa
                mensagemBoa( 1 + rand() % 4 );

                // fim do while interno
                break;
            } // fim if

            // se n�o
            else {

                // imprime mensagem ruim
                mensagemRuim( 1 + rand() % 4 );

            } // fim else

        } // fim while interno

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// cria fun��o geraNumAleatorio
int geraNumAleatorio()
{
    // retorne um n�mero entre 1 e 9
    return 1 + rand() % 9;
} // fim fun��o

// cria a fun��o pergunta
int pergunta( int numero1, int numero2 )
{
    // vari�vel
    int resposta = 0;

    // entrada de dados
    printf( "[0 - p//ara sair] Quanto � %d vezes %d? ", numero1, numero2  );
    scanf( "%d", &resposta );

    // retorne a resposta
    return resposta;
} // fim fun��o pergunta

// cria a fun��o mensagemBoa
void mensagemBoa( int opcao )
{
     switch( opcao )
    {
        case 1:
            // imprima
            printf( "Muito bom!\n" );
            // pare
            break;

        case 2:
            // imprima
            printf( "Excelente!\n" );
            // pare
            break;

        case 3:
            // imprima
            printf( "Bom trabalho!\n" );
            // pare
            break;

        case 4:
            // imprima
            printf( "Continue assim!\n" );
            // pare
            break;
    } // fim switch

} // fim fun��o

// cria a fun��o mensagemRuim
void mensagemRuim( int opcao )
{
    switch( opcao )
    {
        case 1:
            // imprima
            printf( "N�o. Tente novamente!\n" );
            // pare
            break;

        case 2:
            // imprima
            printf( "Errado. Tente mais uma vez!\n" );
            // pare
            break;

        case 3:
            // imprima
            printf( "N�o desista!\n" );
            // pare
            break;

        case 4:
            // imprima
            printf( "N�o. Continue tentando!\n" );
            // pare
            break;
    } // fim switch

} // fim fun��o mensagemRuim

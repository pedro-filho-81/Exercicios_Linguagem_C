/*
    Questão:
    Autor: Pedro Filho, 17/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos
int geraNumAleatorio();
int pergunta( int numero1, int numero2 );
void mensagemBoa( int opcao );
void mensagemRuim( int opcao );

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int num1, num2;
    int  multi = 0;
    int resultado = 0;
    int resposta = 1;

    // cabeçalho
    printf( "INSTRUÇÃO AUXILIADA POR COMPUTADOR\n" );

    // enquanto resposta diferente de zero faça
    while( resposta != 0 ) {

        // gerador
        srand( time( NULL ) );

        // num1 e num2 recebe função geraNumAleatorio
        num1 = geraNumAleatorio();
        num2 = geraNumAleatorio();

        // multiplica num1 por num2
        multi = num1 * num2;

        // enquanto o resultado for diferente de multi faça
        while( resultado != multi ) {

            // resultado recebe o valor retornado pela função pergunta
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

            // se não
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

} // fim função main

// cria função geraNumAleatorio
int geraNumAleatorio()
{
    // retorne um número entre 1 e 9
    return 1 + rand() % 9;
} // fim função

// cria a função pergunta
int pergunta( int numero1, int numero2 )
{
    // variável
    int resposta = 0;

    // entrada de dados
    printf( "[0 - p//ara sair] Quanto é %d vezes %d? ", numero1, numero2  );
    scanf( "%d", &resposta );

    // retorne a resposta
    return resposta;
} // fim função pergunta

// cria a função mensagemBoa
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

} // fim função

// cria a função mensagemRuim
void mensagemRuim( int opcao )
{
    switch( opcao )
    {
        case 1:
            // imprima
            printf( "Não. Tente novamente!\n" );
            // pare
            break;

        case 2:
            // imprima
            printf( "Errado. Tente mais uma vez!\n" );
            // pare
            break;

        case 3:
            // imprima
            printf( "Não desista!\n" );
            // pare
            break;

        case 4:
            // imprima
            printf( "Não. Continue tentando!\n" );
            // pare
            break;
    } // fim switch

} // fim função mensagemRuim

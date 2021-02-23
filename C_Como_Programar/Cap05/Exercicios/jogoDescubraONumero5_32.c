/*
    Questão: 5.32 Descubra o número. Escreva um programa em C que
    contenha o jogo ‘descubra o número’, da seguinte forma: seu programa
    escolhe o número a ser descoberto,  selecionando um inteiro aleatório na faixa de 1 a 1000.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int sorteia = 0;
    int numero =0;
    int resposta = 0;
    int contador = 1;

    while( contador >= 0 )
    {
        // se resposta menor que zero sair do programa
        if( resposta < 0 ) break;

        // gerador
        srand( time( NULL ) );

        // cabeçalho
        printf( "=-= JOGO DESCUBRA O NÚMERO =-=\n" );
        printf( "=-=-=-=-=-=--=-==-=--=-=-=-=-=\n\n" );

        // gera um número aleatório entre 1 e mil
        sorteia = 1 + rand() % 1000;

        // entrada de dados
        printf( "Eu tenho um número entre 1 e 1000\n" );
        printf( "Você consegue descobrir qual é?\n" );
        printf( "Digite sua primeira tentativa: " );
        scanf( "%d", &numero );

        // loop infinito
        while( resposta <= 0 )
        {
            //CONDIÇÕES
            // se número maior que sorteia
            if( numero > sorteia ) {
                // imprima
                printf( "%d é muito alto. Tente novamente. ", numero );
                scanf( "%d", &numero );
            } // fim if

            // se não
            else if ( numero < sorteia ) {
                // imprima
                printf( "%d é muito baixo. Tente novamente.", numero );
                scanf( "%d", &numero );
            } // fim else

            // se número igual a sorteia
            else if( numero == sorteia ) {
                // imprima
                printf( "Excelente! %d é o número sorteado\n", sorteia );

                // pergunte
                printf( "Deseja continuar [ 1 sim / -1 não ]?" );
                scanf( "%d", &resposta );

                // se resposta igual a -1 sair do programa
                if( resposta <= 0 ) {
                    break;
                } // fim if

                else {
                    system( "cls" ); // limpa a tela
                    break;
                } // fim else

            } // fim if

        } // fim while interno

    } // fim while externo

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

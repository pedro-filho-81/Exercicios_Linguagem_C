/*
    Quest�o: 5.32 Descubra o n�mero. Escreva um programa em C que
    contenha o jogo �descubra o n�mero�, da seguinte forma: seu programa
    escolhe o n�mero a ser descoberto,  selecionando um inteiro aleat�rio na faixa de 1 a 1000.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
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

        // cabe�alho
        printf( "=-= JOGO DESCUBRA O N�MERO =-=\n" );
        printf( "=-=-=-=-=-=--=-==-=--=-=-=-=-=\n\n" );

        // gera um n�mero aleat�rio entre 1 e mil
        sorteia = 1 + rand() % 1000;

        // entrada de dados
        printf( "Eu tenho um n�mero entre 1 e 1000\n" );
        printf( "Voc� consegue descobrir qual �?\n" );
        printf( "Digite sua primeira tentativa: " );
        scanf( "%d", &numero );

        // loop infinito
        while( resposta <= 0 )
        {
            //CONDI��ES
            // se n�mero maior que sorteia
            if( numero > sorteia ) {
                // imprima
                printf( "%d � muito alto. Tente novamente. ", numero );
                scanf( "%d", &numero );
            } // fim if

            // se n�o
            else if ( numero < sorteia ) {
                // imprima
                printf( "%d � muito baixo. Tente novamente.", numero );
                scanf( "%d", &numero );
            } // fim else

            // se n�mero igual a sorteia
            else if( numero == sorteia ) {
                // imprima
                printf( "Excelente! %d � o n�mero sorteado\n", sorteia );

                // pergunte
                printf( "Deseja continuar [ 1 sim / -1 n�o ]?" );
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

} // fim fun��o main

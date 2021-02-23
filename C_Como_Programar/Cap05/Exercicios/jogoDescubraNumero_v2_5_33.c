/*
    Quest�o: 5.33 Modifica��o de �Descubra o n�mero�. Modifique  o programa
    do Exerc�cio 5.32 para contar o n�mero  de tentativas que o jogador fez.
    Se o n�mero for 10  ou menos, imprima Ou voc� conhece o segredo  ou teve sorte!
    Se o jogador acertar o n�mero em  10 tentativas, ent�o imprima Ahah!
    Voc� conhece  o segredo! Se o jogador conseguir em mais de 10  tentativas,
    ent�o imprima Voc� deveria se sair  melhor! Por que n�o deveria passar
    de 10 tentativas?  Bem, com cada �escolha boa�, o jogador deveria poder
    eliminar metade dos n�meros. Agora, mostre por que  qualquer n�mero
    de 1 a 1000 pode ser descoberto em  10 ou menos tentativas.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 23/02/2021
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
    int resposta = 1;
    int contador = 1;
    int verificador = 0;

    while( contador > 0 )
    {
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
        while( resposta > 0 )
        {
            //CONDI��ES
            // se n�mero maior que sorteia
            if( numero > sorteia ) {
                // imprima
                printf( "%d � muito alto. Tente novamente. ", numero );
                scanf( "%d", &numero );
                verificador++; // verificador de tentativas
            } // fim if

            // se n�o
            else if ( numero < sorteia ) {
                // imprima
                printf( "%d � muito baixo. Tente novamente.", numero );
                scanf( "%d", &numero );
                verificador++; // verificador de tentativas
            } // fim else

            // se n�mero igual a sorteia
            else if( numero == sorteia ) {
                // imprima
                printf( "Excelente! %d � o n�mero sorteado\n", sorteia );

                // se o verificador menor ou igual a 10
                if( verificador < 10 ) {
                    // imprima
                    printf( "Voc� acertou em %d tentativas.\nOu voc� conhece o segredo ou teve sorte.\n",
                           verificador );
                } // fim if

                // se n�o, se o verificador for igual a 10
                else if( verificador == 10 ) {
                    // imprima
                    printf( "Voc� acertou em %d tentativas.\nAhah! Voc� conhece conhece o segredo!\n",
                           verificador );
                } // fim else if

                // se n�o, se o verificador maior que 10
                else if( verificador > 10 ) {
                    // imprima
                    printf( "Voc� acertou em %d tentativas.\nVoc� deveria se sair melhor!\n",
                           verificador );
                } // fim else if

                // pergunte
                printf( "Deseja continuar jogando [ 1 sim / 0 n�o ]?" );
                scanf( "%d", &resposta );

                // se resposta menor ou igual a zero sai do programa
                if( resposta <= 0 ) {
                    // contador recebe menos 1
                    contador = -1;
                    // resposta recebe menos 1
                    resposta = -1;
                } // fim if

                // se n�o
                else {
                    // limpa a tela
                    system( "cls" );
                    // inicializa cotador
                    contador = 1;
                    // inicializa resposta
                    resposta = 1;
                    // zera verificador
                    verificador = 0;
                    // sai do segundo while
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

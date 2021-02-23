/*
    Questão: 5.33 Modificação de ‘Descubra o número’. Modifique  o programa
    do Exercício 5.32 para contar o número  de tentativas que o jogador fez.
    Se o número for 10  ou menos, imprima Ou você conhece o segredo  ou teve sorte!
    Se o jogador acertar o número em  10 tentativas, então imprima Ahah!
    Você conhece  o segredo! Se o jogador conseguir em mais de 10  tentativas,
    então imprima Você deveria se sair  melhor! Por que não deveria passar
    de 10 tentativas?  Bem, com cada ‘escolha boa’, o jogador deveria poder
    eliminar metade dos números. Agora, mostre por que  qualquer número
    de 1 a 1000 pode ser descoberto em  10 ou menos tentativas.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 23/02/2021
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
    int resposta = 1;
    int contador = 1;
    int verificador = 0;

    while( contador > 0 )
    {
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
        while( resposta > 0 )
        {
            //CONDIÇÕES
            // se número maior que sorteia
            if( numero > sorteia ) {
                // imprima
                printf( "%d é muito alto. Tente novamente. ", numero );
                scanf( "%d", &numero );
                verificador++; // verificador de tentativas
            } // fim if

            // se não
            else if ( numero < sorteia ) {
                // imprima
                printf( "%d é muito baixo. Tente novamente.", numero );
                scanf( "%d", &numero );
                verificador++; // verificador de tentativas
            } // fim else

            // se número igual a sorteia
            else if( numero == sorteia ) {
                // imprima
                printf( "Excelente! %d é o número sorteado\n", sorteia );

                // se o verificador menor ou igual a 10
                if( verificador < 10 ) {
                    // imprima
                    printf( "Você acertou em %d tentativas.\nOu você conhece o segredo ou teve sorte.\n",
                           verificador );
                } // fim if

                // se não, se o verificador for igual a 10
                else if( verificador == 10 ) {
                    // imprima
                    printf( "Você acertou em %d tentativas.\nAhah! Você conhece conhece o segredo!\n",
                           verificador );
                } // fim else if

                // se não, se o verificador maior que 10
                else if( verificador > 10 ) {
                    // imprima
                    printf( "Você acertou em %d tentativas.\nVocê deveria se sair melhor!\n",
                           verificador );
                } // fim else if

                // pergunte
                printf( "Deseja continuar jogando [ 1 sim / 0 não ]?" );
                scanf( "%d", &resposta );

                // se resposta menor ou igual a zero sai do programa
                if( resposta <= 0 ) {
                    // contador recebe menos 1
                    contador = -1;
                    // resposta recebe menos 1
                    resposta = -1;
                } // fim if

                // se não
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

} // fim função main

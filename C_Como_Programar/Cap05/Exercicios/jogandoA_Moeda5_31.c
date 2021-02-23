/*
    Questão: 5.31 Jogando uma moeda. Escreva um programa que simule
    o lançamento de uma moeda. Para cada lançamento  da moeda, o programa
    deverá imprimir Cara ou Coroa.  Deixe o programa jogar a moeda 100 vezes
    e conte o número de vezes que cada lado da moeda aparece. Imprima os
    resultados. O programa deverá chamar uma função flip  separada, que não
    utilize argumentos e retorne 0 para cara  e 1 para coroa. [Nota: se
    o programa realisticamente simula o lançamento de uma moeda, então
    cada lado da moeda  deve aparecer aproximadamente em metade do tempo
    para  um total de aproximadamente 50 caras e 50 coroas.]
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edição do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipo
int JogaMoeda();

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // gerador aleatórios
    srand( time( NULL ) );

    // variáveis
    int contaCara = 0;
    int contaCoroa = 0;
    int retorno = 0;

    // loop para jogar a moeda
    for( int i = 1; i <= 100; i++ ) {

        // retorno recebe a função joga moeda
        retorno = JogaMoeda();

        // se retorno igual a zero
        if( retorno == 0 ) {
            // imprima
            printf( " Cara " );
            // soma 1
            contaCara++;
        } // fim if

        // se não
        else {
            // imprima
            printf( " Coroa ");
            // soma 1
            contaCoroa++;
        } // fim else

    } // fim for

    // mostra resultado
    printf( "\nForam mostrados: %d Caras e %d Coroas.\n", contaCara, contaCoroa );

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

// função JogaMoeda
int JogaMoeda()
{
    // variável recebe valor aleatório
    int moeda = rand() % 2;
    // retorna o valor 0 ou 1
    return moeda;

} // fim função

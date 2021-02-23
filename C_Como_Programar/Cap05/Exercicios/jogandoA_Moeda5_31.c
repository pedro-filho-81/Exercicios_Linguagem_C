/*
    Quest�o: 5.31 Jogando uma moeda. Escreva um programa que simule
    o lan�amento de uma moeda. Para cada lan�amento  da moeda, o programa
    dever� imprimir Cara ou Coroa.  Deixe o programa jogar a moeda 100 vezes
    e conte o n�mero de vezes que cada lado da moeda aparece. Imprima os
    resultados. O programa dever� chamar uma fun��o flip  separada, que n�o
    utilize argumentos e retorne 0 para cara  e 1 para coroa. [Nota: se
    o programa realisticamente simula o lan�amento de uma moeda, ent�o
    cada lado da moeda  deve aparecer aproximadamente em metade do tempo
    para  um total de aproximadamente 50 caras e 50 coroas.]
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 155). Edi��o do Kindle.
    Autor: Pedro Filho, 18/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipo
int JogaMoeda();

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // gerador aleat�rios
    srand( time( NULL ) );

    // vari�veis
    int contaCara = 0;
    int contaCoroa = 0;
    int retorno = 0;

    // loop para jogar a moeda
    for( int i = 1; i <= 100; i++ ) {

        // retorno recebe a fun��o joga moeda
        retorno = JogaMoeda();

        // se retorno igual a zero
        if( retorno == 0 ) {
            // imprima
            printf( " Cara " );
            // soma 1
            contaCara++;
        } // fim if

        // se n�o
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

} // fim fun��o main

// fun��o JogaMoeda
int JogaMoeda()
{
    // vari�vel recebe valor aleat�rio
    int moeda = rand() % 2;
    // retorna o valor 0 ou 1
    return moeda;

} // fim fun��o

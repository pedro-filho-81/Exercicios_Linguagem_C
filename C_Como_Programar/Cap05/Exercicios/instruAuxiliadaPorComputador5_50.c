/*
    Quest�o: Instru��o Auxiliada por Computador (IAC). Escreva  um programa
    que ajude um aluno do ensino fundamental a aprender a tabuada. Use a fun��o
    rand  para produzir dois inteiros positivos de um d�gito. O  programa dever� ent�o
    fazer uma pergunta ao usu�-  rio, tal como  Quanto � 6 vezes 7?  O aluno, ent�o,
    entra com a resposta. Em seguida, o  programa verifica a resposta do aluno.
    Se estiver correta, mostre a mensagem �Muito bom!� e fa�a outra pergunta de tabuada.
    Se a resposta estiver errada,  mostre a mensagem �N�o. Tente novamente.�
    e deixe que o aluno tente responder � mesma pergunta repetidamente, at� que
    ele finalmente acerte  a resposta. Uma fun��o separada dever� ser usada  para
    gerar cada nova pergunta. Essa fun��o dever�  ser chamada uma vez, quando
    a aplica��o iniciar a  execu��o, e toda vez que o usu�rio responder
    � pergunta corretamente.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
    Autor: Pedro Filho, 25/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos
int geraNumAleatorio();
int pergunta( int numero1, int numero2 );

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

                // mostra resultado
                printf( "Muito bom!\n" );

                // fim do while interno
                break;
            } // fim if

            // se n�o
            else {

                // imprime
                printf( "N�o! Tente novamente!\n" );
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
    printf( "[0 - para sair] Quanto � %d vezes %d? ", numero1, numero2  );
    scanf( "%d", &resposta );

    // retorne a resposta
    return resposta;
} // fim fun��o pergunta

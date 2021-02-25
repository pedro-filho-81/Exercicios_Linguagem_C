/*
    Questão: Instrução Auxiliada por Computador (IAC). Escreva  um programa
    que ajude um aluno do ensino fundamental a aprender a tabuada. Use a função
    rand  para produzir dois inteiros positivos de um dígito. O  programa deverá então
    fazer uma pergunta ao usuá-  rio, tal como  Quanto é 6 vezes 7?  O aluno, então,
    entra com a resposta. Em seguida, o  programa verifica a resposta do aluno.
    Se estiver correta, mostre a mensagem ‘Muito bom!’ e faça outra pergunta de tabuada.
    Se a resposta estiver errada,  mostre a mensagem ‘Não. Tente novamente.’
    e deixe que o aluno tente responder à mesma pergunta repetidamente, até que
    ele finalmente acerte  a resposta. Uma função separada deverá ser usada  para
    gerar cada nova pergunta. Essa função deverá  ser chamada uma vez, quando
    a aplicação iniciar a  execução, e toda vez que o usuário responder
    à pergunta corretamente.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
    Autor: Pedro Filho, 25/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos
int geraNumAleatorio();
int pergunta( int numero1, int numero2 );

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

                // mostra resultado
                printf( "Muito bom!\n" );

                // fim do while interno
                break;
            } // fim if

            // se não
            else {

                // imprime
                printf( "Não! Tente novamente!\n" );
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
    printf( "[0 - para sair] Quanto é %d vezes %d? ", numero1, numero2  );
    scanf( "%d", &resposta );

    // retorne a resposta
    return resposta;
} // fim função pergunta

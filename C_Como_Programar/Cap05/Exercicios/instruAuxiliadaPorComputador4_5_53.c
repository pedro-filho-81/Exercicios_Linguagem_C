/*
    Quest�o: 5.53 Instru��o auxiliada por computador: n�veis de  dificuldade.
    Os exerc�cios 5.50 a 5.52 desenvolveram  um programa de instru��o auxiliada
    por computador para  ajudar a ensinar multiplica��o a um aluno do ensino
    fundamental. Modifique o programa de modo a permitir que o  usu�rio entre
    com um n�vel de dificuldade. Em um n�vel de  dificuldade 1, o programa dever�
    usar apenas n�meros  de um d�gito nos problemas; em um n�vel de dificuldade
    2, os n�meros podem ter dois d�gitos e assim por diante.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
    Autor: Pedro Filho, 26/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos
int geraNumAleatorio( int opcao );
int pergunta( int numero1, int numero2 );
int cabecalho();
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
    int contarRespCorretas = 0;
    int contarRespIncorretas = 0;
    int contarResultado = 0;
    int calcular = 0;
    int opc = 0;

    // cabe�alho
    opc = cabecalho();

    // se opc igual a 4 saia do programa
    if( opc == 4 ) resposta = 0;

    // enquanto resposta diferente de zero fa�a
    while( resposta != 0 ) {

        // gerador
        srand( time( NULL ) );

        // num1 e num2 recebe fun��o geraNumAleatorio
        num1 = geraNumAleatorio( opc );
        num2 = geraNumAleatorio( opc );

        // multiplica num1 por num2
        multi = num1 * num2;

        // enquanto o resultado for diferente de multi fa�a
        while( resultado != multi ) {

            // resultado recebe o valor retornado pela fun��o pergunta
            resultado = pergunta( num1, num2 );

            // se resultado igual a multi
            if( resultado == multi ) {

                // mostra mensagem boa
                mensagemBoa( 1 + rand() % 4 );

                // conta respostas corretas
                contarRespCorretas++;

            } // fim if

            // se n�o
            else {

                // imprime mensagem ruim
                mensagemRuim( 1 + rand() % 4 );

                // contar respostas erradas
                contarRespIncorretas++;

            } // fim else

            // conta quantas quest�es foram respondidas
            contarResultado++;

            // se contarResultado igual a dez pare
            if( contarResultado == 10 ) {

                // imprime resultado
                printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-\n" );
                printf( "Voc� respondeu %d quest�es, sendo:\n", contarResultado );
                printf( "Corretas %d\n", contarRespCorretas );
                printf( "Erradas %d\n", contarRespIncorretas );

                // se respostas corretas forem menor que 8
                if( contarRespCorretas < 8 ) {
                    // imprima
                    printf( "Por favor, pessa ajuda a seu professor.\n" );
                    printf( "D� a vez ao pr�ximo aluno.\n" );

                    // zera as contagens
                    contarResultado = 0;
                    contarRespCorretas = 0;
                    contarRespIncorretas = 0;

                    // pausa o sistema
                    system( "pause" );

                    // limpa a tela
                    system( "cls" );

                    // imprime cabe�alho
                    printf( "INSTRU��O AUXILIADA POR COMPUTADOR\n" );

                } // fim if

                // se n�o
                else {

                    // imprima
                    printf( "Parab�ns, voc� est� pronto para o pr�ximo n�vel!\n" );
                    printf( "D� a vez ao pr�ximo aluno.\n" );

                    // zera as contagens
                    contarResultado = 0;
                    contarRespCorretas = 0;
                    contarRespIncorretas = 0;

                    // pausa o sistema
                    system( "pause" );

                    // limpa a tela
                    system( "cls" );

                    // imprime cabe�alho
                    printf( "INSTRU��O AUXILIADA POR COMPUTADOR\n" );

                } // fim else

            } // fim if

            // se resultado igual a zero fim do programa
            if( resultado == 0 ) {

                // resposta recebe zero
                resposta = 0;
                // para o programa
                break;
            } // fim if

        } // fim while interno

    } // fim while

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

// cria fun��o geraNumAleat�rio
int geraNumAleatorio( int opcao )
{
    switch( opcao )
    {
        case 1:
            // retorne um n�mero entre 1 e 9
            return 1 + rand() % 9;
            break;

        case 2:
            // retorne um n�mero entre 1 e 99
            return 1 + rand() % 99;
            break;

        case 3:
            // retorne um n�mero entre 1 e 999
            return 1 + rand() % 999;
            break;
    } // fim switch

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

// fun��o cabecalho
int cabecalho()
{
    // vari�vel
    int opcao = 0;

    // cabe�alho
    printf( "INSTRU��O AUXILIADA POR COMPUTADOR\n" );

    // menu de op��es do n�vel do jogo
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
    printf( "**** N�MEROS DE DIGITOS USADOS ****\n" );
    printf( "\t1 - Um digito\n" );
    printf( "\t2 - Dois digitos\n" );
    printf( "\t3 - Tr�s digitos\n" );
    printf( "\t4 - Sair\n" );
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );

    // entrada de dados
    printf( "Digite a op��o desejada: " );
    scanf( "%d", &opcao );

    // retorne a op��o
    return opcao;

 } // fim fun��o cabecalho

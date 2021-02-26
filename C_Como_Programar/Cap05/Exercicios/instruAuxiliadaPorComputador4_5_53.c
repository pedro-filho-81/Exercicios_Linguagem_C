/*
    Questão: 5.53 Instrução auxiliada por computador: níveis de  dificuldade.
    Os exercícios 5.50 a 5.52 desenvolveram  um programa de instrução auxiliada
    por computador para  ajudar a ensinar multiplicação a um aluno do ensino
    fundamental. Modifique o programa de modo a permitir que o  usuário entre
    com um nível de dificuldade. Em um nível de  dificuldade 1, o programa deverá
    usar apenas números  de um dígito nos problemas; em um nível de dificuldade
    2, os números podem ter dois dígitos e assim por diante.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
    Autor: Pedro Filho, 26/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos
int geraNumAleatorio( int opcao );
int pergunta( int numero1, int numero2 );
int cabecalho();
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
    int contarRespCorretas = 0;
    int contarRespIncorretas = 0;
    int contarResultado = 0;
    int calcular = 0;
    int opc = 0;

    // cabeçalho
    opc = cabecalho();

    // se opc igual a 4 saia do programa
    if( opc == 4 ) resposta = 0;

    // enquanto resposta diferente de zero faça
    while( resposta != 0 ) {

        // gerador
        srand( time( NULL ) );

        // num1 e num2 recebe função geraNumAleatorio
        num1 = geraNumAleatorio( opc );
        num2 = geraNumAleatorio( opc );

        // multiplica num1 por num2
        multi = num1 * num2;

        // enquanto o resultado for diferente de multi faça
        while( resultado != multi ) {

            // resultado recebe o valor retornado pela função pergunta
            resultado = pergunta( num1, num2 );

            // se resultado igual a multi
            if( resultado == multi ) {

                // mostra mensagem boa
                mensagemBoa( 1 + rand() % 4 );

                // conta respostas corretas
                contarRespCorretas++;

            } // fim if

            // se não
            else {

                // imprime mensagem ruim
                mensagemRuim( 1 + rand() % 4 );

                // contar respostas erradas
                contarRespIncorretas++;

            } // fim else

            // conta quantas questões foram respondidas
            contarResultado++;

            // se contarResultado igual a dez pare
            if( contarResultado == 10 ) {

                // imprime resultado
                printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-\n" );
                printf( "Você respondeu %d questões, sendo:\n", contarResultado );
                printf( "Corretas %d\n", contarRespCorretas );
                printf( "Erradas %d\n", contarRespIncorretas );

                // se respostas corretas forem menor que 8
                if( contarRespCorretas < 8 ) {
                    // imprima
                    printf( "Por favor, pessa ajuda a seu professor.\n" );
                    printf( "Dê a vez ao próximo aluno.\n" );

                    // zera as contagens
                    contarResultado = 0;
                    contarRespCorretas = 0;
                    contarRespIncorretas = 0;

                    // pausa o sistema
                    system( "pause" );

                    // limpa a tela
                    system( "cls" );

                    // imprime cabeçalho
                    printf( "INSTRUÇÃO AUXILIADA POR COMPUTADOR\n" );

                } // fim if

                // se não
                else {

                    // imprima
                    printf( "Parabéns, você está pronto para o próximo nível!\n" );
                    printf( "Dê a vez ao próximo aluno.\n" );

                    // zera as contagens
                    contarResultado = 0;
                    contarRespCorretas = 0;
                    contarRespIncorretas = 0;

                    // pausa o sistema
                    system( "pause" );

                    // limpa a tela
                    system( "cls" );

                    // imprime cabeçalho
                    printf( "INSTRUÇÃO AUXILIADA POR COMPUTADOR\n" );

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

} // fim função main

// cria função geraNumAleatório
int geraNumAleatorio( int opcao )
{
    switch( opcao )
    {
        case 1:
            // retorne um número entre 1 e 9
            return 1 + rand() % 9;
            break;

        case 2:
            // retorne um número entre 1 e 99
            return 1 + rand() % 99;
            break;

        case 3:
            // retorne um número entre 1 e 999
            return 1 + rand() % 999;
            break;
    } // fim switch

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

// função cabecalho
int cabecalho()
{
    // variável
    int opcao = 0;

    // cabeçalho
    printf( "INSTRUÇÃO AUXILIADA POR COMPUTADOR\n" );

    // menu de opções do nível do jogo
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
    printf( "**** NÚMEROS DE DIGITOS USADOS ****\n" );
    printf( "\t1 - Um digito\n" );
    printf( "\t2 - Dois digitos\n" );
    printf( "\t3 - Três digitos\n" );
    printf( "\t4 - Sair\n" );
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );

    // entrada de dados
    printf( "Digite a opção desejada: " );
    scanf( "%d", &opcao );

    // retorne a opção
    return opcao;

 } // fim função cabecalho

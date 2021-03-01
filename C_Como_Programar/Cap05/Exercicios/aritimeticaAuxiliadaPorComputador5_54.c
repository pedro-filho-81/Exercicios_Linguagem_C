/*
    Quest�o: 5.54 Instru��o auxiliada por computador: variando  os tipos de
    problemas. Modifique o programa do  Exerc�cio 5.53 de modo a permitir que
    o usu�rio escolha  um tipo de problema aritm�tico para estudar. Uma op��o
    1 significa problemas de adi��o, 2 significa problemas  de subtra��o,
    3 significa problemas de multiplica��o e 4  significa uma mistura aleat�ria
    de todos esses tipos.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edi��o do Kindle.
    Autor: Pedro Filho, 28/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// prot�tipos de fun��o
int geraNumAleatorio( int opcao );
int pergunta( int opcao, int numero1, int numero2 );
void menuDeDigitos();
void menuAritimetica();
int opcaoAritimetica( int opcao, int numero1, int numero2 );
void mensagemBoa( int opcao );
void mensagemRuim( int opcao );
int sinal( int opcao );
void cabecalho();


// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int num1, num2; // recebe valores aleat�rios
    int  multi = 0; // multiplica os n�meros
    int resultado = 0; // recebe o valor informado pelo usu�rio na pergunta
    int resposta = 0; // controla a execu��o do segundo while
    int contarRespCorretas = 0; // conta as respostas corretas
    int contarRespIncorretas = 0; // conta as respostas erradas
    int contarResultado = 0; // conta as respostas do usu�rio
    int calcular = 0;
    int opcDeDigitos = 0; // seleciona para calcular com ( 1, 2, ou 3 digitos )
    int opcAritimetica = 0; // seleciona a op��o aritim�tica (soma, subtra��o ou multiplica��o)
    int respostaAritimetica = 0;// recebe o valor retornado da fun��o op��o aritim�tica
    int cabecalho = 1; // controla a execu��o do primeiro while

    // CABE�ALHO
    // enquanto cabe�alho diferente de zero
    while( cabecalho != 0 )
    {
        // chama fun��o menu aritim�tica
        menuAritimetica();
        // Seleciona uma op��o do menu aritim�tica
        printf( "Digite a op��o: " );
        scanf( "%d", &opcAritimetica );

        // verifica se op��o aritim�tica � igual a 5 e saia do programa
        if( opcAritimetica == 5 ) break;

        // se op��o aritim�tica � diferente de 5 fa�a
        if( opcAritimetica != 5 ) {

            // limpa a tela
            system( "cls" );

            // chama a fun��o menu de digitos
            menuDeDigitos();
            // escolhe a op��o do menu de digitos
            printf( "Digite a op��o: " );
            scanf( "%d", &opcDeDigitos );

            // verifica se opcDeDigitos � igual a 4 e saia do programa
            if( opcDeDigitos == 4 ) break;

            // se op��o de digitos diferente de 4 ou op��o aritim�tica diferente de 5
            if( opcDeDigitos != 4 || opcAritimetica != 5 )
                // inicialize resposta em 1
                resposta = 1;

        } // fim if

        // ATRIBUI VALORES ALEAT�RIOS AOS N�MEROS
        // enquanto resposta diferente de zero fa�a
        while( resposta != 0 ) {

            // gerador
            srand( time( NULL ) );

            // num1 e num2 recebe fun��o geraNumAleatorio
            num1 = geraNumAleatorio( opcDeDigitos );
            num2 = geraNumAleatorio( opcDeDigitos );

            // resposta aritim�tica recebe o valor retornado da fun��o op��o aritim�tica
            respostaAritimetica = opcaoAritimetica( opcAritimetica, num1, num2 );

            // EXECUTA O PROGRAMA COM PERGUNTA E RESPOSTA
            // enquanto o resultado for diferente da resposta aritim�tica fa�a
            while( resultado != respostaAritimetica ) {

                // resultado recebe o valor retornado pela fun��o pergunta
                resultado = pergunta( opcAritimetica, num1, num2 );

                // se resultado igual a zero fim do programa
                if( resultado == 0 ) {

                    // resposta recebe zero
                    resposta = 0;
                    cabecalho = 0;

                    // para o programa
                    break;

                } // fim if

                // SE RESULTADO IGUAL A RESPOSTA
                // se resultado igual a resposta aritim�tica
                if( resultado == respostaAritimetica ) {

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

                // QUANDO RESULTADO FOR IGUAL A DEZ
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
                        resposta = 0;

                        // pausa o sistema
                        system( "pause" );

                        // limpa a tela
                        system( "cls" );
                        break;

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
                        resposta = 0;

                        // pausa o sistema
                        system( "pause" );

                        // limpa a tela
                        system( "cls" );

                    } // fim else

                } // fim if

            } // fim segundo while

        } // fim terceiro while
    } // fim primeiro while

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
            // retorne um n�mero entre 10 e 99
            return 10 + rand() % 89;
            break;

        case 3:
            // retorne um n�mero entre 100 e 999
            return 100 + rand() % 899;
            break;
    } // fim switch

} // fim fun��o

// cria a fun��o pergunta
int pergunta( int opcao, int numero1, int numero2 )
{
    // vari�vel
    int resposta = 0;

    // entrada de dados
    printf( "[0 - para sair] Quanto � %d", numero1 );

    if( opcao == 1 )
        printf( " + " );
    else if( opcao == 2 )
        printf( " - " );
    else if( opcao == 3 )
        printf( " x " );

    printf( "%d? ", numero2 );
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
void menuDeDigitos()
{
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

 } // fim fun��o cabecalho

 // fun��o menu aritim�tica
 void menuAritimetica()
 {
    // cabe�alho
    printf( "INSTRU��O AUXILIADA POR COMPUTADOR\n" );

    // menu de op��es do n�vel do jogo
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
    printf( "**** OP��ES ARITIM�TICAS ****\n" );
    printf( "\t1 - Somar\n" );
    printf( "\t2 - Subitrair\n" );
    printf( "\t3 - Multiplicar\n" );
    printf( "\t4 - Misto\n" );
    printf( "\t5 - Sair\n" );
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );

 } // fim fun��o menu aritim�tica

 // fun��o op��o aritim�tica
 int opcaoAritimetica( int opcao, int numero1, int numero2 )
 {
     switch( opcao )
     {
        case 1:
            return numero1 + numero2;
            break;

        case 2:
            return numero1 - numero2;
            break;

        case 3:
            return numero1 * numero2;
            break;

     } // fim  switch
 } // fim fu��o

 // fun��o cabe�alho
 void cabecalho()
 {

 }

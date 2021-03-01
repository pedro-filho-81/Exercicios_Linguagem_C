/*
    Questão: 5.54 Instrução auxiliada por computador: variando  os tipos de
    problemas. Modifique o programa do  Exercício 5.53 de modo a permitir que
    o usuário escolha  um tipo de problema aritmético para estudar. Uma opção
    1 significa problemas de adição, 2 significa problemas  de subtração,
    3 significa problemas de multiplicação e 4  significa uma mistura aleatória
    de todos esses tipos.
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 159). Edição do Kindle.
    Autor: Pedro Filho, 28/02/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// protótipos de função
int geraNumAleatorio( int opcao );
int pergunta( int opcao, int numero1, int numero2 );
void menuDeDigitos();
void menuAritimetica();
int opcaoAritimetica( int opcao, int numero1, int numero2 );
void mensagemBoa( int opcao );
void mensagemRuim( int opcao );
int sinal( int opcao );
void cabecalho();


// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int num1, num2; // recebe valores aleatórios
    int  multi = 0; // multiplica os números
    int resultado = 0; // recebe o valor informado pelo usuário na pergunta
    int resposta = 0; // controla a execução do segundo while
    int contarRespCorretas = 0; // conta as respostas corretas
    int contarRespIncorretas = 0; // conta as respostas erradas
    int contarResultado = 0; // conta as respostas do usuário
    int calcular = 0;
    int opcDeDigitos = 0; // seleciona para calcular com ( 1, 2, ou 3 digitos )
    int opcAritimetica = 0; // seleciona a opção aritimética (soma, subtração ou multiplicação)
    int respostaAritimetica = 0;// recebe o valor retornado da função opção aritimética
    int cabecalho = 1; // controla a execução do primeiro while

    // CABEÇALHO
    // enquanto cabeçalho diferente de zero
    while( cabecalho != 0 )
    {
        // chama função menu aritimética
        menuAritimetica();
        // Seleciona uma opção do menu aritimética
        printf( "Digite a opção: " );
        scanf( "%d", &opcAritimetica );

        // verifica se opção aritimética é igual a 5 e saia do programa
        if( opcAritimetica == 5 ) break;

        // se opção aritimética é diferente de 5 faça
        if( opcAritimetica != 5 ) {

            // limpa a tela
            system( "cls" );

            // chama a função menu de digitos
            menuDeDigitos();
            // escolhe a opção do menu de digitos
            printf( "Digite a opção: " );
            scanf( "%d", &opcDeDigitos );

            // verifica se opcDeDigitos é igual a 4 e saia do programa
            if( opcDeDigitos == 4 ) break;

            // se opção de digitos diferente de 4 ou opção aritimética diferente de 5
            if( opcDeDigitos != 4 || opcAritimetica != 5 )
                // inicialize resposta em 1
                resposta = 1;

        } // fim if

        // ATRIBUI VALORES ALEATÓRIOS AOS NÚMEROS
        // enquanto resposta diferente de zero faça
        while( resposta != 0 ) {

            // gerador
            srand( time( NULL ) );

            // num1 e num2 recebe função geraNumAleatorio
            num1 = geraNumAleatorio( opcDeDigitos );
            num2 = geraNumAleatorio( opcDeDigitos );

            // resposta aritimética recebe o valor retornado da função opção aritimética
            respostaAritimetica = opcaoAritimetica( opcAritimetica, num1, num2 );

            // EXECUTA O PROGRAMA COM PERGUNTA E RESPOSTA
            // enquanto o resultado for diferente da resposta aritimética faça
            while( resultado != respostaAritimetica ) {

                // resultado recebe o valor retornado pela função pergunta
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
                // se resultado igual a resposta aritimética
                if( resultado == respostaAritimetica ) {

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

                // QUANDO RESULTADO FOR IGUAL A DEZ
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
                        resposta = 0;

                        // pausa o sistema
                        system( "pause" );

                        // limpa a tela
                        system( "cls" );
                        break;

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
            // retorne um número entre 10 e 99
            return 10 + rand() % 89;
            break;

        case 3:
            // retorne um número entre 100 e 999
            return 100 + rand() % 899;
            break;
    } // fim switch

} // fim função

// cria a função pergunta
int pergunta( int opcao, int numero1, int numero2 )
{
    // variável
    int resposta = 0;

    // entrada de dados
    printf( "[0 - para sair] Quanto é %d", numero1 );

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
void menuDeDigitos()
{
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

 } // fim função cabecalho

 // função menu aritimética
 void menuAritimetica()
 {
    // cabeçalho
    printf( "INSTRUÇÃO AUXILIADA POR COMPUTADOR\n" );

    // menu de opções do nível do jogo
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );
    printf( "**** OPÇÕES ARITIMÉTICAS ****\n" );
    printf( "\t1 - Somar\n" );
    printf( "\t2 - Subitrair\n" );
    printf( "\t3 - Multiplicar\n" );
    printf( "\t4 - Misto\n" );
    printf( "\t5 - Sair\n" );
    printf( "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n" );

 } // fim função menu aritimética

 // função opção aritimética
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
 } // fim fução

 // função cabeçalho
 void cabecalho()
 {

 }

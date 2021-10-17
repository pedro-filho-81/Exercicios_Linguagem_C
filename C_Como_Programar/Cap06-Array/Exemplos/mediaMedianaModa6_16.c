/*
    1 /* Figura 6.16: fig06_16.c
    2 Esse programa introduz o t�pico da an�lise de dados de pesquisa.
    3 Ele calcula a m�dia, a mediana e a moda dos dados
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 181). Edi��o do Kindle.
    16/10/2021
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 99
#define FREQ_SIZE 10

// prot�tipos
void addValue( int vetor[], int size );
void average( const int answer[], int size );
void median( int answer[], int size );
void mode( int freq[], int freqSize, const int answer[], int size );
void bubbleSort( int vetor[], int size );
void printArray( const int vetor[], int size );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // arrays
    int frequency[ FREQ_SIZE ] = { 0 };
    int response[ SIZE ] = { 0 };

    // cabe�alho
    printf( "%28s", "M�DIA - MEDIANA - MODA\n" );

    // semente geradora
    srand( time(NULL ) );

    // chama a fun��o addValue
    addValue( response, SIZE );

    // chama a fun��o printArray
    printf( "response[ SIZE ]" );
    printArray( response, SIZE );

    // chama a fun��o average
    average(response, SIZE );

    // chama a fun��o mediana
    median( response, SIZE );

    // chama a fun��o mode
    mode( frequency, FREQ_SIZE, response, SIZE );

    printf( "\n" ); // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria fun��o addValue
void addValue( int vetor[], int size )
{
    // loop para adicionar valor ao vetor
    for( int valor = 0; valor < size; valor++ )
        // vetor recebe valores aleat�rios de 1 a 9
        vetor[ valor ] = 1 + rand() % 9;
} // fim fun��o addValue

// cria a fun��o printArray
void printArray(const int vetor[], int size )
{
    printf( " = { " );
    // loop para mostrar os valores do vetor
    for( int mostrar = 0; mostrar < size; mostrar++ )
    {
        // se mostrar for multiplo de 10
        if( mostrar % 20 == 0 )
            // pula linha
            printf("\n");

        // imprima
        printf( "%3d", vetor[ mostrar ] );

    } // fim for mostrar

    printf( " };\n"); // imprima e pula linha

} // fim fun��o printArray

// cria fun��o average(m�dia)
void average(const int answer[], int size )
{
    // vari�veis
    int total = 0; // soma os elementos do array

    // cabe�alho
    printf( "\n%s\n%s\n%s\n", "********************", "       M�dia", "********************" );

    // loop para somar os valores do array
    for( int valor = 0; valor < size; valor++ )
    {
        total += answer[ valor ]; // soma os valores do array
    } // fim for valor

    // imprime a m�dia
    printf( "A m�dia � o valor m�dio dos itens de dados.\n"
               "A m�dia � igual ao total de todos\n"
               "os itens de dados dividido pelo n�mero\n"
               "de itens de dados  ( %d ). O valor m�dio para esta\n"
               "execu��o �: %d / %d = %.3f\n\n", size , total, size, ( double ) total / size );
} // fim fun��o average

// cria a fun��o median
void median( int answer[], int size )
{
    // cabe�al
    printf( "%s\n%s\n%s\n", "********************", "       Mediana", "********************" );
    printf( "O array de resposta, \nn�o ordenado, � " );

    // chama a fun��o printArray
    printArray( answer, size );

    // chama a fun��o bubbleSort
    bubbleSort( answer, size );

    printf( "Ordenado � " );
    printArray( answer, size );

    printf( "\nA mediana � o elemento %d do\n"
              "do array ordenado de %d elementos.\n"
              "Para essa execu��o, a mediana � %d\n\n",
              size / 2, size, answer[ size / 2] );
} // fim fun��o median

// cria a fun��o moda
void mode(int freq[], int freqSize, const int answer[], int size )
{
    // vari�veis
    int rating; // contador para acessar os elementos de 1-9 do array freq
    int j; // contador para resumir os elementos de 0-98 do array answer
    int h; // contador para exibir histograma dos elementos do array freq
    int largest = 0; // representa a maior frequ�ncia
    int modeValue = 0; // representa resposta mais frequente

    // cabe�al
    printf( "%s\n%s\n%s\n", "********************", "       Moda", "********************" );

    // inicializa frequ�ncia em zero
    for( int rating = 0; rating < freqSize; rating++ )
    {
        // frequ�ncia recebe zero
        freq[ rating ] = 0;
    } // fim for rating

    // frequ�ncia de resumo
    for( j = 0; j < size; j++ )
    {
        // mostrar
        ++freq[ answer[ j ]  ];
    } // fim for

    // cabe�alho
    printf( "%s%15s%19s\n",
               "Resposta", "Frequ�ncia", "Histrograma");

    // loop mostra frequ�ncia
    for( rating = 1; rating < freqSize; rating++ )
    {
       // imprima
       printf( "%6d%16d", rating, freq[ rating ] );

       // acompanha o valor da moda e da maior frequ�ncia
       if( freq[ rating ] > largest )
       {
           // largest recebe freq
           largest = freq[ rating ];
           // modeValue recebe rating
           modeValue = rating;
       } // fim if

       printf( "         " ); // imprime 9 espa�os em brando

       // loop para mostrar a barra de asterisco ( histograma )
       for( int asterisco = 1; asterisco <= freq[ rating ]; asterisco++ )
       {
           // imprime assterisco
           printf( "*" );
       } // fim for asterisco

       // pula linha
       printf( "\n" );
    } // fim for mostra frequ�ncia

    // imprime o valor da moda
    printf( "A moda � o valor mais frequ�nte.\n"
               "Para essa execu��o a moda � %d que ocorreu"
               " %d vezes.\n", modeValue, largest );

} // fim fun��o mode

// cria a fun��o bubbleSort
void bubbleSort( int vetor[], int size )
{
    // vari�vel
    int auxiliar = 0;

    // loop para organizar o vetor
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size; j++ )
        {
            if( vetor[ j ] > vetor[ i ] )
            {
                auxiliar = vetor[ j ];
                vetor[ j ] = vetor[ i ];
                vetor[ i ] = auxiliar;
            } // fim if
        } // fim for interno
    } // fim for externo
} // fim fun��o bubleSort

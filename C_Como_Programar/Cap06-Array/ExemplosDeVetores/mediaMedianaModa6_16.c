/*
    1 /* Figura 6.16: fig06_16.c
    2 Esse programa introduz o tópico da análise de dados de pesquisa.
    3 Ele calcula a média, a mediana e a moda dos dados
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 181). Edição do Kindle.
    16/10/2021
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 99
#define FREQ_SIZE 10

// protótipos
void addValue( int vetor[], int size );
void average( const int answer[], int size );
void median( int answer[], int size );
void mode( int freq[], int freqSize, const int answer[], int size );
void bubbleSort( int vetor[], int size );
void printArray( const int vetor[], int size );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // arrays
    int frequency[ FREQ_SIZE ] = { 0 };
    int response[ SIZE ] = { 0 };

    // cabeçalho
    printf( "%28s", "MÉDIA - MEDIANA - MODA\n" );

    // semente geradora
    srand( time(NULL ) );

    // chama a função addValue
    addValue( response, SIZE );

    // chama a função printArray
    printf( "response[ SIZE ]" );
    printArray( response, SIZE );

    // chama a função average
    average(response, SIZE );

    // chama a função mediana
    median( response, SIZE );

    // chama a função mode
    mode( frequency, FREQ_SIZE, response, SIZE );

    printf( "\n" ); // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria função addValue
void addValue( int vetor[], int size )
{
    // loop para adicionar valor ao vetor
    for( int valor = 0; valor < size; valor++ )
        // vetor recebe valores aleatórios de 1 a 9
        vetor[ valor ] = 1 + rand() % 9;
} // fim função addValue

// cria a função printArray
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

} // fim função printArray

// cria função average(média)
void average(const int answer[], int size )
{
    // variáveis
    int total = 0; // soma os elementos do array

    // cabeçalho
    printf( "\n%s\n%s\n%s\n", "********************", "       Média", "********************" );

    // loop para somar os valores do array
    for( int valor = 0; valor < size; valor++ )
    {
        total += answer[ valor ]; // soma os valores do array
    } // fim for valor

    // imprime a média
    printf( "A média é o valor médio dos itens de dados.\n"
               "A média é igual ao total de todos\n"
               "os itens de dados dividido pelo número\n"
               "de itens de dados  ( %d ). O valor médio para esta\n"
               "execução é: %d / %d = %.3f\n\n", size , total, size, ( double ) total / size );
} // fim função average

// cria a função median
void median( int answer[], int size )
{
    // cabeçal
    printf( "%s\n%s\n%s\n", "********************", "       Mediana", "********************" );
    printf( "O array de resposta, \nnão ordenado, é " );

    // chama a função printArray
    printArray( answer, size );

    // chama a função bubbleSort
    bubbleSort( answer, size );

    printf( "Ordenado é " );
    printArray( answer, size );

    printf( "\nA mediana é o elemento %d do\n"
              "do array ordenado de %d elementos.\n"
              "Para essa execução, a mediana é %d\n\n",
              size / 2, size, answer[ size / 2] );
} // fim função median

// cria a função moda
void mode(int freq[], int freqSize, const int answer[], int size )
{
    // variáveis
    int rating; // contador para acessar os elementos de 1-9 do array freq
    int j; // contador para resumir os elementos de 0-98 do array answer
    int h; // contador para exibir histograma dos elementos do array freq
    int largest = 0; // representa a maior frequência
    int modeValue = 0; // representa resposta mais frequente

    // cabeçal
    printf( "%s\n%s\n%s\n", "********************", "       Moda", "********************" );

    // inicializa frequência em zero
    for( int rating = 0; rating < freqSize; rating++ )
    {
        // frequência recebe zero
        freq[ rating ] = 0;
    } // fim for rating

    // frequência de resumo
    for( j = 0; j < size; j++ )
    {
        // mostrar
        ++freq[ answer[ j ]  ];
    } // fim for

    // cabeçalho
    printf( "%s%15s%19s\n",
               "Resposta", "Frequência", "Histrograma");

    // loop mostra frequência
    for( rating = 1; rating < freqSize; rating++ )
    {
       // imprima
       printf( "%6d%16d", rating, freq[ rating ] );

       // acompanha o valor da moda e da maior frequência
       if( freq[ rating ] > largest )
       {
           // largest recebe freq
           largest = freq[ rating ];
           // modeValue recebe rating
           modeValue = rating;
       } // fim if

       printf( "         " ); // imprime 9 espaços em brando

       // loop para mostrar a barra de asterisco ( histograma )
       for( int asterisco = 1; asterisco <= freq[ rating ]; asterisco++ )
       {
           // imprime assterisco
           printf( "*" );
       } // fim for asterisco

       // pula linha
       printf( "\n" );
    } // fim for mostra frequência

    // imprime o valor da moda
    printf( "A moda é o valor mais frequênte.\n"
               "Para essa execução a moda é %d que ocorreu"
               " %d vezes.\n", modeValue, largest );

} // fim função mode

// cria a função bubbleSort
void bubbleSort( int vetor[], int size )
{
    // variável
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
} // fim função bubleSort

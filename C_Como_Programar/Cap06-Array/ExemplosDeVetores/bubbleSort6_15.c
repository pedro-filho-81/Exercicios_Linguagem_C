/*
    1 /* Figura 6.15: fig06_15.c
    2 Esse programa ordena os valores de um array em ordem crescente
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 179). Edição do Kindle.
    16/10/2021
*/

// incluir biblioteca
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 10

// protótipo
void bubbleSort( int vetor[], int size );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // array
    int a[ TAMANHO ] = { 9, 7, 6, 8, 1, 5, 4, 0, 2, 3 };

    // imprime
    printf("Vetor original = { " );
    // loop para mostrar os valores do vetor
    for( int i = 0; i < TAMANHO; i++ )
        printf( "%d ", a[ i ] ); // imprime os valores do vetor
    printf( " };\n" );

    bubbleSort( a, TAMANHO );

    // imprime
    printf("Vetor organizado = { " );
    // loop para mostrar os valores do vetor
    for( int i = 0; i < TAMANHO; i++ )
        printf( "%d ", a[ i ] ); // imprime os valores do vetor
    printf( " };\n" );

    printf("\n"); // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

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
                printf( "auxiliar recebe vetor[ j ] = %d\n", vetor[ j ] );
                auxiliar = vetor[ j ];

                printf( "vetor[ j ] recebe vetor[ i ] = %d\n", vetor[ i ] );
                vetor[ j ] = vetor[ i ];

                printf( "vetor[ i ] recebe auxuliar = %d\n", auxiliar );
                vetor[ i ] = auxiliar;
                printf( "auxiliar = %d\n", auxiliar );
                printf( "Fim \n" ); // pula linha

            } // fim if
        } // fim for interno
    } // fim for externo
} // fim função bubleSort

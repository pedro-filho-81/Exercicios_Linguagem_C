/*
    1 Figura 6.19: fig06_19.c
    2 Pesquisa binária de um array ordenado
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 186). Edição do Kindle.
    17/10/2021
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

// PROTÓTIPOS
void addElements( int vector[] ); // add elements to the vector
void showVectorElements( const int vector[] ); // mostra os elementos do vetor
void printHeader(); // imprime o cabeçalho
void bubbleSort( int vector[] ); // ordena os elementos do vetor
void printRow( const int vector[], int low, int mid, int high ); // mostra os elementos da linha do vetor
void printHeader(); // imprime o cabeçalho
int binarySreach( const int vector[], int sreachKey, int low, int high ); // pesquisa binaria

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portviduguese");

    // limpa a tela
    system("cls");

    // create vector
     int number[ SIZE ];

     // create variable
     int key; // use input
     int result = 0; // to binariSreach

     // semente geradora
     srand( time( NULL ) );

     // display
     printf( "PESQUISA BINÁRIA\n" );

    // call the function addElements
    addElements( number );

    // display
    printf( "vetor original " );

    // call the function showVectorElements
    showVectorElements( number );

    // call the function bubbleSort
    bubbleSort( number );

    // display
    printf("vetor organizado " );

    // call the function showVectorElements
    showVectorElements( number );

     // data input
     printf( "Informe o número a ser pesquisado: " );
     scanf( "%d", &key );

    printHeader(); // display header

    // result receives value from binary sreach function
    result = binarySreach( number, key, 0, SIZE - 1 );

    // if result different from -1
    if( result != -1 )
    {
        // display
        printf( "%d encontrado na posição %d\n", key, result );
    } // end if
    else
    {
        // display
        printf( "%d não encontrado;\n", key );
    } // end else

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// create function addElements
void addElements( int vector[] )
{
    // for loop to add  emements to the vector
    for( int adicionar = 0; adicionar < SIZE; adicionar++ )
        vector[ adicionar ] = 1 + rand() % 50;
} // end function addElements

// create function showVectorElements
void showVectorElements( const int vector[] )
{
    printf( "= { " );
    // for loop to show vector elements
    for( int mostrar = 0; mostrar < SIZE; mostrar++ )
    {
        // display vector elements
        printf( "%3d", vector[ mostrar ] );
    } // end for mostrar
    printf( " };\n");
} // end function showVectorElements

// create function bubbleSort
void bubbleSort( int vector[] )
{
    // create variable
    int temporary = 0;

    // for loop to organize vector elements
    for( int i = 0; i < SIZE; i++ )
    {
        for( int j = 0; j < SIZE; j++ )
        {
            if( vector[ j ] > vector[ i ] )
            {
                temporary = vector[ i ];
                vector[ i ] = vector[ j ];
                vector[ j ] = temporary;
            } // end if
        } // end for j
    } // end for i
} // end function bubbleSort

// create function binarySreach
int binarySreach( const int vector[], int sreachKey, int low, int high )
{
    int middle; // variável para manter elemento do meio do array

    while( low <= high )
    {
        middle = ( low + high ) / 2;

        printRow( vector, low, middle, high );

        if( sreachKey == vector[ middle ] )
        {
            return middle;
        }
        else if ( sreachKey < vector[ middle ] )
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        } // end else

    } // end while

    return -1;

} //  end functin binarySreach

// create function printRow
void printRow( const int vector[], int low, int mid, int high )
{
    int i; // contador

    for( i = 0; i < SIZE; i++ )
    {
        if( i < low || i > high )
        {
            printf( " " );
        }
        else if( i == mid )
        {
            printf( "%3d#", vector[ i ] );
        }
        else
        {
            printf( "%3d ", vector[ i ] );
        }
    }
    printf( "\n" );
} // end function printRow

// create function printHeader
void printHeader()
{
    // variable
    int i; // contador

    printf( "Subscritos\n" );

    // for loop to show line
    for( i = 0; i < SIZE; i++ ) {
        printf( "%3d ", i );
    } // end for index

    printf( "\n" ); // next line

    // loop for to display a character line
    for( i = 0; i < SIZE * 4; i++ ) {
        printf( "-" );
    } // end for line

    printf( "\n" ); // next line

} // end function printHeader

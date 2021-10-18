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
void addElements( int vector[], int size ); // add elements to the vector
void showVectorElements( const int vector[], int size ); // mostra os elementos do vetor
void printHeader( const int vetor[], int size );
void bubbleSort( int vector[], int size ); // ordena os elementos do vetor
void printRow( const int vector[], int size, int low, int mid, int high );
void printHeader(); // imprime o cabeçalho
int binarySreach( const int vector[], int size, int sreachKey, int low, int high ); // pesquisa binaria

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
    addElements( number, SIZE );

    // display
    printf( "vetor original " );

    // call the function showVectorElements
    showVectorElements( number, SIZE );

    // call the function bubbleSort
    bubbleSort( number, SIZE );

    // display
    printf("vetor organizado " );

    // call the function showVectorElements
    showVectorElements( number, SIZE );

     // data input
     printf( "Informe o número a ser pesquisado: " );
     scanf( "%d", &key );

//     printHeader();

    // result receives value from binary sreach function
    result = binarySreach( number, SIZE, key, 0, SIZE - 1 );

    // if result different from -1
    if( result != -1 )
    {
        // display
        printf( "%d encontrado na posição %d\n", result );
    } // end if
    else
    {
        // display
        printf( "%d não encontrado;\n" );
    } // end else

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// create function addElements
void addElements( int vector[], int size )
{
    // for loop to add  emements to the vector
    for( int adicionar = 0; adicionar < size; adicionar++ )
        vector[ adicionar ] = 1 + rand() % 50;
} // end function addElements

// create function showVectorElements
void showVectorElements( const int vector[], int size )
{
    printf( "= { " );
    // for loop to show vector elements
    for( int mostrar = 0; mostrar < size; mostrar++ )
    {
        // display vector elements
        printf( "%3d", vector[ mostrar ] );
    } // end for mostrar
    printf( " };\n");
} // end function showVectorElements

// create function bubbleSort
void bubbleSort( int vector[], int size )
{
    // create variable
    int temporary = 0;

    // for loop to organize vector elements
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size; j++ )
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
int binarySreach( const int vector[], int size, int sreachKey, int low, int high )
{
    int middle; // variável para manter elemento do meio do array

    while( low <= high )
    {
        middle = ( low + high ) / 2;

        printRow( vector, size, low, middle, high );

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
void printRow( const int vector[], int size, int low, int mid, int high )
{
    int i; // contador

    for( i = 0; i < size; i++ )
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

//

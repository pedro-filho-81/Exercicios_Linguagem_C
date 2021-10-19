/*
    1 Figura 6.18: fig06_18.c
    2 Pesquisa linear de um array
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 184). Edição do Kindle.
    18/10/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

// protótipos
void addElements( int vector[], int size ); // adicionar elementos ao vetor
void showVectorElements( const int vector[], int size ); // show vector elements
int linearSearch( const int vector[], int size, int key ); // search elements in vector

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // variables
    int vector[ SIZE ]; // create vector
    int count; // contador
    int searchKey; // chave da pequisa
    int element;

    addElements( vector, SIZE ); // add elements to the vector
    showVectorElements( vector, SIZE ); // show vector elements

    // data input
    printf( "Informe o valor a pesquisar: " );
    scanf( "%d", &searchKey ); // user input

    // element receives linearSearch
    element = linearSearch( vector, SIZE, searchKey );

    // if element equals searchKey
    if( element != -1 )
    {
        // display
        printf( "%d encontra-se na posição %d\n", searchKey, element );
    } // end if
    else
    {
        // display
        printf( "%d não encontrado.\n", searchKey );
    } // end else

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// create function addElements
void addElements( int vector[], int size )
{
    // loop to add elements
    for( int add = 0; add < size; add++ )
    {
        // vector receives elements
        vector[ add ] = 2 * add;
    } //  end for
} // end function

// create function showVectorElements
void showVectorElements( const int vector[], int size )
{
    printf( "vector[ size ] = { " );

    // loop to show vector elements
    for( int show = 0; show < size; show++ )
    {
        // if show greater than zero
        if( show > 0 )
            // display elements
            printf( "%3d ", vector[ show ] );

        // if multiple of twenty
        if( show % 20 == 0 )
            // next line
            printf( "\n" );

    } // end for

    // next line
    printf( " };\n" );

} // end function

// create function linearSearch
int linearSearch( const int vector[], int size, int key )
{
    // for loop to search vector
    for( int pesquisa = 0; pesquisa < size; pesquisa++ )
    {
        // if vector equals key
        if( vector[ pesquisa ] == key )
        {
            return pesquisa;
        } // end if
    } // end for

    // if vector different from search return -1
    return -1;
} // end function

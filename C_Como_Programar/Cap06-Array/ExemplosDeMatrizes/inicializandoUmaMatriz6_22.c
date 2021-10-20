/*
    1 /* Figura 6.22: fig06_22.c
    2 Exemplo de array com subscrito duplo
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 191). Edição do Kindle.
    19/10/2021
*/

#include <stdio.h>
#include <stdlib.h> // to system
#include <locale.h> // to setlocale

#define STUDENTS 3
#define EXAMS 4

// protótipo
int minimum( const int grades[][ EXAMS], int pupils, int test );
int maximum( const int grades[][ EXAMS ], int pupils, int test );
void printArray( const int grades[][ EXAMS ], int pupils, int test );
double average( const int setOfGrades[], int test );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls"); // clear the screen

    // variable
    int student;

    // array
    const int studentGrades[ STUDENTS ][ EXAMS ] = {
                                                                                            { 77, 68, 86, 73 },
                                                                                            { 96, 87, 89, 78 },
                                                                                            { 70, 90, 86, 81 }
                                                                                        }; // end array student grades

    // show array studentGrades
    printf( "A matriz studentGrades é \n" );
    printArray( studentGrades, STUDENTS, EXAMS );

    printf( "\n\nMenor nota = %d\nMaior nota = %d\n",
           minimum( studentGrades, STUDENTS, EXAMS ),
           maximum( studentGrades, STUDENTS, EXAMS ) );

    printf( "Média = %.2f\n", average( studentGrades, EXAMS ) );

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// create function printArray
void printArray( const int grades[][ EXAMS ], int pupils, int test )
{
    // display header
    printf( "                  [0]    [1]   [2]   [3]" );

    // loop for show array students
    for( int i = 0; i < pupils; i++ )
    {
        // show header
        printf( "\nstudentGrades[ %d ] ", i );

        // loop for show array grades
        for( int j = 0; j < test; j++ )
        {
            printf( "%-5d ", grades[ i ][ j ] );
        } // end for grades
    } // end for students
} // end funcion printArray

// create function minimum
int minimum( const int grades[][ 4 ], int pupils, int test )
{
    // variable
    int lowGrade = 100;

    // loop through the note lines
    for( int lines = 0; lines < pupils; lines++ )
    {
        // loop through the columns of notes
        for( int columns = 0; columns < test; columns++ )
        {
            if( grades[ lines ][ columns ] < lowGrade )
                lowGrade = grades[ lines ][ columns ];
        } // end for columns
    } // end for lines

    return lowGrade;

} // end function minimum

// create function maximum
int maximum( const int grades[][ 4 ], int pupils, int test )
{
    int highGrade = 0;

    // loop through the note lines
    for( int lines = 0; lines < pupils; lines++ )
    {
        // loop through the columns of notes
        for( int columns = 0; columns < test; columns++ )
        {
            if( grades[ lines ][ columns ] > highGrade )
                highGrade = grades[ lines ][ columns ];

        } // end for columns
    } // end for lines

    return highGrade;

} // end function maximum

// create function average
double average( const int setOfGrades[], int test )
{
    // variable
    int total = 0;

    // loop to sum vector values
    for( int values = 0; values < test; values++ )
    {
        total += setOfGrades[ values ];
    } // end for valores

    // return avarage
    return ( double ) total / test;

} // end function average

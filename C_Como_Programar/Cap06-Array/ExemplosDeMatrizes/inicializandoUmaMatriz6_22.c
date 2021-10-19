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
void Minimum( const int grades[][ EXAMS], int pupils, int test );
void Maximum( const int grades[][ EXAMS ], int pupils, int test );
void printArray( const int grades[][ EXAMS ], int pupils, int test );
double Average( const int setOfGrades[], int test );

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
                                                                                            {77, 68, 86, 73 },
                                                                                            {96, 87, 89, 78 },
                                                                                            { 70, 90, 86, 81 }
                                                                                        }; // end array student grades

    // show array studentGrades
    printf( "A matriz studentGrades é \n" );
    printArray( studentGrades, STUDENTS, EXAMS );

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

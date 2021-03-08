/*
    Quest�o: /* Figura 6.9: fig06_09.c  2 Lan�a um dado de 6 lados 6000 vezes
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 170). Edi��o do Kindle.
    Autor: Pedro Filho, 07/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 7

// fun��o principal
int main()
{
    // configura para portugu�s Brasil
    setlocale( LC_ALL, "Portuguese" );

    // vari�veis
    int face; // valor aleat�rio de 1 a 6
    int rola; // contador de 1 a 6000
    int frequencia[ SIZE ] = {0}; // contador da frequ�ncia

    // gerador
    srand( time( NULL ) );

    // LOOP PARA rolar o dado
    for( rola = 1; rola <= 6000; rola++ )
    {
        // gera um n�mero aleat�rio entre 1 e 6
        face =  1 + rand() % 6;
        // frequ�ncia recebe um n�mero de face e soma 1 na posi��o
        ++frequencia[ face ];
    } // fim for

    // imprime cabe�alho
    printf( "%s%13s\n", "Face", "Frequ�ncia" );

    // loop para mostrar a frequ�ncia
    for( face = 1; face < SIZE; face++ )
    {
        // imprime a posi��o e o valor armazenado na posi��o
        printf( "%3d%10d\n", face, frequencia[ face ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim fun��o main

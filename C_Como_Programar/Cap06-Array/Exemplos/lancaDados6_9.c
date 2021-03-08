/*
    Questão: /* Figura 6.9: fig06_09.c  2 Lança um dado de 6 lados 6000 vezes
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 170). Edição do Kindle.
    Autor: Pedro Filho, 07/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 7

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int face; // valor aleatório de 1 a 6
    int rola; // contador de 1 a 6000
    int frequencia[ SIZE ] = {0}; // contador da frequência

    // gerador
    srand( time( NULL ) );

    // LOOP PARA rolar o dado
    for( rola = 1; rola <= 6000; rola++ )
    {
        // gera um número aleatório entre 1 e 6
        face =  1 + rand() % 6;
        // frequência recebe um número de face e soma 1 na posição
        ++frequencia[ face ];
    } // fim for

    // imprime cabeçalho
    printf( "%s%13s\n", "Face", "Frequência" );

    // loop para mostrar a frequência
    for( face = 1; face < SIZE; face++ )
    {
        // imprime a posição e o valor armazenado na posição
        printf( "%3d%10d\n", face, frequencia[ face ] );
    } // fim for

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

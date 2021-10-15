/*
    Figura 6.7: fig06_07.c
    2 Programa de pesquisa com estudantes
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 168). Edição do Kindle.
    06/03/2021
*/

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

// função principal
int main()
{
    // configura para português Brasil
    setlocale( LC_ALL, "Portuguese" );

    // variáveis
    int answer; // contador para percorrer 40  respostas
    int rating; // contador para percorrer frequência de 1 a 10

    // inicializa vetor frequencia em zero
    int frequencia[ FREQUENCY_SIZE ] = {0};
    int vetor[ RESPONSE_SIZE ] = {1,2,6,4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8 ,6, 7, 5, 6, 6,6,
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // loop for para ver a frequência de repetição de um número
    for( answer = 0; answer < RESPONSE_SIZE; answer++ )
    {
        ++frequencia[  vetor[ answer ]  ];
    }

    //mostra resultado
    printf( "%s%17s\n", "Avaliação", "Frequência" );

    // loop para mostrar valores
    for( rating = 1; rating < FREQUENCY_SIZE; rating++ )
    {
        // imprima
        printf( "%6d%17d\n", rating, frequencia[ rating ] );
    }

    // pula uma linha
    printf( "\n" );

    // pausa o sistema
    system( "pause" );

    // termina o programa
    return 0;

} // fim função main

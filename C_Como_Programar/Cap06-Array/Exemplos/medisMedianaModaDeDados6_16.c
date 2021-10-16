/*
    1 /* Figura 6.16: fig06_16.c
    2 Esse programa introduz o tópico da análise de dados de pesquisa.
    3 Ele calcula a média, a mediana e a moda dos dados
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 181). Edição do Kindle.
    16/10/2021
*/

#include <stdio.h>
#include <locale.h>
#define SIZE 99
#define FREQ_SIZE 10

// protótipos
void addValue( int vetor, int size );
void average( const int answer[], int size );
void median( int answer[], int size );
void mode( int freq[], int freqSize, const int answer[], int size );
void bubbleSort( int a[], int size );
void printArray( const int a[], int size );

// função principal
int main()
{
    // localização geográfica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
